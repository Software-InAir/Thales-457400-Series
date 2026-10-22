#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#include "exc4000.h"
#include "excsysio.h"
#include "proto_rtx.h"

#ifndef eSuccessfulCompletion
#define eSuccessfulCompletion 0
#endif

#define ERRLEN 255

// This demo program provides basic card-level information; and module-level information

int main(void)
{

    int device_num, module_num, iRet, status;
    WORD boardtype, handle;
	WORD fwrevision, hwrevision, numchans;
	char boardName[MAX_PATH];

	WORD interface_rev, pwUniqueID;
	char errstr[ERRLEN];
	
	usint enabled_chans, xmt_chans;
	usint chanval[10] = {CHAN_0,CHAN_1,CHAN_2,CHAN_3,CHAN_4,CHAN_5,CHAN_6,CHAN_7,CHAN_8,CHAN_9};

	FILE *outFile;
	time_t rawtime;
	
	char dateTimeStr[MAX_PATH], fileName[100];
	char myDateStr[MAX_PATH];

/*
// These structs are defined in exc4000.h:

#define MODULEINFO_NAMESTR_SIZE 30
typedef struct t_ModuleInfo
{
	WORD moduleType;								// e.g. 05 (Px), 04 (RTx)
	WORD numOfBitsAccess;							// e.g. 16, 32, 64
	WORD moduleFamily;								// e.g. 4, 8
	char moduleNameStr[MODULEINFO_NAMESTR_SIZE];	// e.g. "M4K1553Px"
	WORD reserved[13];
} t_ModuleInfo;

typedef struct t_INSTANCE_EXTENDED_EXCUNETINFO
{
	UINT CommOptions;			//0x0104 - 0x0107 (bits 0-2 max header version; rest are reserved)
	WORD SerialNumber;			//0x010E - 0x010F
	char UNetControlFwStr[10];
	WORD OptionsReg;			//0x0130 - 0x0131 (bit 0 = supports CLEAR_EOM_STATUS; bit 1 = supports FIFO_RW; bit 2 = supports 32BIT_RW; rest are reserved)
	char MACaddrStr[20];		// actual length is 18
	char IPaddrStr[20];			// actual length is 16
	char reserved[50];
} t_INSTANCE_EXTENDED_EXCUNETINFO;
*/

	t_ModuleInfo moduleInfo[8];
	t_INSTANCE_EXTENDED_EXCUNETINFO extendedUnetInfo;

	// ---------------------------------------------------------
	time(&rawtime);
	sprintf(dateTimeStr, "%s", ctime(&rawtime));

	// collect date-month-year to add to the file name
	strncpy(myDateStr, dateTimeStr+8, 2);
	strncpy(myDateStr+2, dateTimeStr+4, 3);
	strncpy(myDateStr+5, dateTimeStr+20, 4);
	strncpy(myDateStr+9, "-", 1);
	strncpy(myDateStr+10, dateTimeStr+11, 2);
	strncpy(myDateStr+12, dateTimeStr+14, 2);
	strncpy(myDateStr+14, dateTimeStr+17, 2);
	
	strcpy(fileName, "demo_information_429_");
	sprintf(fileName+21, "%s", myDateStr);
	sprintf(fileName+37, "%s", ".txt");

	outFile = fopen(fileName,"w");

	fprintf(outFile, "Excalibur 429RTx Board Type Information\n\n");

	printf("----------------------------------------------------------------------\n");
	printf("This program will prompt you for a Device Number.\n\n");
	printf("Device Number: Use 25 for 4000PCI[e] or ExCARD boards\n");
#ifdef _WIN32
	printf("               Or use the device number from ExcConfig\n\n");
#endif
	printf("----------------------------------------------------------------------\n\n");

	printf("The program output is a file in the folder where the EXE sits.\n");
	printf("The filename is: %s\n", fileName);
	fprintf(outFile, "[-- This file is named: %s --]\n\n", fileName);
	printf("----------------------------------------------------------------------\n\n");

	printf("Enter the device number of the board: ");
	scanf("%d",&device_num);

	fflush(outFile);

	printf("Please wait while the information is gathered and stored to the output file.\n");
	printf("The output file ---  %s  --- will be opened shortly ...\n", fileName);
	
	// ---------------------------------------------------------
	// general 4000 level register information - 4000 board type
	fprintf(outFile, "-------------------------------------\n");
	fprintf(outFile, "--  Board Level Status Information --\n");
	fprintf(outFile, "-------------------------------------\n\n");

	fprintf(outFile, "Device number is: %d\n", device_num);
	
	// ---------------------------------------------------------
    iRet = Get_4000Board_Type(device_num, &boardtype);
	if (iRet < eSuccessfulCompletion)
	{
		Get_Error_String_4000(iRet, ERRLEN, errstr);
		fprintf(outFile, "Get_4000Board_Type Error: %s\n",errstr);
	}
	else
	{
		Get_4000Board_Name(device_num, boardName);
		fprintf(outFile, "Board Type is: 0x%X [%s]\n\n", boardtype, boardName);

		// additional UNET hardware & firmware information
		if (IsUnetFamilyDevice_4000(device_num) == TRUE)
		{
			Get_Extended_UNet_Info(device_num, &extendedUnetInfo);

			fprintf(outFile, "Examining UNet device Serial Number %u\n\n", extendedUnetInfo.SerialNumber);
			fprintf(outFile, "UNet Control Firmware Revision is: %s\n", extendedUnetInfo.UNetControlFwStr);
			fprintf(outFile, "IP  Address is: %s\n", extendedUnetInfo.IPaddrStr);
			fprintf(outFile, "MAC Address is: %s\n", extendedUnetInfo.MACaddrStr);
			fprintf(outFile, "\n");
		}
	}

	fprintf(outFile, "\n");
	
	if (boardtype != EXC_BRDTYPE_429PCMCIA)
	{
		// --------------------------------------------------
		// additional general 4000 level register information

		// dip switch setting of the card
		iRet = Get_UniqueID_P4000(device_num, &pwUniqueID);
		if (iRet == eSuccessfulCompletion)
			fprintf(outFile, "Dip Switch setting is: 0x%X (%d)\n", pwUniqueID, pwUniqueID);
		else
		{
			Get_Error_String_4000(iRet, ERRLEN, errstr);
			fprintf(outFile, "Get_UniqueID_P4000 Error: %s\n",errstr);
		}

		// --------------------------------------------------
		// 4000 level interfaace rev (FPGA)
		iRet = Get_4000Interface_Rev(device_num, &interface_rev);
		if (iRet == eSuccessfulCompletion)
		{
			if (interface_rev != 0)
				fprintf(outFile, "4000 Interface Rev is: %d.%d\n", (interface_rev & 0xF0) >> 4, interface_rev & 0xF);
			else
				fprintf(outFile, "4000 Interface Rev is unavailable.\n");
		}
		else
		{
			Get_Error_String_4000(iRet, ERRLEN, errstr);
			fprintf(outFile, "Get_4000Interface_Rev Error: %s\n",errstr);
		}
		fprintf(outFile, "\n");

		// ---------------------------------------
		// extract module type for each module on the board
		for (module_num=0; module_num<8; module_num++)
		{
			memset ( (void *) moduleInfo[module_num].moduleNameStr, 0, MODULEINFO_NAMESTR_SIZE);
			moduleInfo[module_num].moduleType = EXC4000_MODTYPE_NONE;
			moduleInfo[module_num].moduleFamily = 0;
			moduleInfo[module_num].numOfBitsAccess = 0;

			iRet = Get_4000Module_Info(device_num, module_num, &moduleInfo[module_num]);
			if (iRet == eSuccessfulCompletion)
			{
				// Both EXC4000_MODTYPE_NOMOD (00) and EXC4000_MODTYPE_NONE (1F) are indicators of no module
				if ( (moduleInfo[module_num].moduleType != EXC4000_MODTYPE_NONE) && (moduleInfo[module_num].moduleType != EXC4000_MODTYPE_NOMOD) )
					fprintf(outFile, "Module %d is of type: %-13s (modType 0x%02X, Family M%uK, %u-bit Access)\n", module_num, moduleInfo[module_num].moduleNameStr, moduleInfo[module_num].moduleType, moduleInfo[module_num].moduleFamily, moduleInfo[module_num].numOfBitsAccess);
				else
					fprintf(outFile, "Module %d is of type: No module present\n", module_num);
			}
		}
	}

	// ------------------------------------
	// module specific register information
	fprintf(outFile, "\n\n");
	fprintf(outFile, "-------------------------------\n");
	fprintf(outFile, "-- Module Status Information --\n");
	fprintf(outFile, "-------------------------------\n\n");

	if (boardtype != EXC_BRDTYPE_429PCMCIA)
	{
		//fprintf(outFile, "\n-------------------------------\n");
		for (module_num=0; module_num<8; module_num++)
		{
			if (moduleInfo[module_num].moduleType == EXC4000_MODTYPE_RTX)
			{
				fprintf(outFile, "Module %d is a 429RTx family module ...\n", module_num);
				// initialize the module, print message to verify
				enabled_chans = chanval[0];
				xmt_chans = chanval[0];
				status = Init_Module_RTx(device_num, module_num, enabled_chans, xmt_chans);
				if (status < 0)
				{
					Get_Error_String_RTx(status, errstr);
					fprintf(outFile, "Init_Module_RTx Failure %s\n", errstr);
					continue;
				}
				else
				{
					handle = status;
					fprintf(outFile, "Init_Module_RTx PASSED\n");
				}

				// check module for memory failure
				if ((Read_Board_Status_RTx(handle) & 0x0400) == 0)
				{
					// bit 10 == 1 means that module/card memory is OK; ==0 means memory problems
					// if memory fails, card will not work - display message
					fprintf(outFile, "Module FAILED Internal Test\n");
				}
				else
				{
					fprintf(outFile, "Module PASSED Internal Test\n");	
				}
				
				// -------------------------------------------------
				// get and display firmware & hardware revisions
				hwrevision = Read_HwRevision_RTx(handle);
				fwrevision = Read_Revision_RTx(handle);
				numchans = Read_Number_Of_Channels_RTx(handle);

				fprintf(outFile, "Module Hardware revision is %x.%01x\n", hwrevision / 0x10, hwrevision % 0x10);  // hwrevision/16, hwrevision%16
				fprintf(outFile, "Module Firmware revision is %x.%02x\n", fwrevision / 0x100, fwrevision % 0x100);
				fprintf(outFile, "Number of 429RTx channels on this module is %d\n\n", numchans);

				fprintf(outFile, "\n\n");
				}
			}
		}
	else  // boardtype == EXC_BRDTYPE_429PCMCIA
	{
		enabled_chans = chanval[0];
		xmt_chans = chanval[0];
		module_num = PCMCIA_MODULE_NUM;  // 100
		status = Init_Module_RTx(device_num, module_num, enabled_chans, xmt_chans);
		if (status < 0)
		{
			Get_Error_String_RTx(status, errstr);
			fprintf(outFile, "Init_Module_RTx Failure %s\n", errstr);
		}
		else
		{
			handle = status;
			fprintf(outFile, "Init_Module_RTx PASSED\n");
		}

		// check module for memory failure
		if ((Read_Board_Status_RTx(handle) & 0x0400) == 0)
		{
			// bit 10 == 1 means that module/card memory is OK; ==0 means memory problems
			// if memory fails, card will not work - display message
			fprintf(outFile, "Module FAILED Internal Test\n");
		}
		else
		{
			fprintf(outFile, "Module PASSED Internal Test\n");	
		}

		fprintf(outFile, "--- Module %d is a 429RTx module ...\n", module_num);

		// get and display firmware & hardware revisions
		hwrevision = Read_HwRevision_RTx(handle);
		fwrevision = Read_Revision_RTx(handle);
		numchans = Read_Number_Of_Channels_RTx(handle);

		//Print(outFile, "Module Hardware revision is %x.%01x\n", hwrevision / 0x10, hwrevision % 0x10);  // hwrevision/16, hwrevision%16
		// updated, needs additional fix: Print(outFile, "Module Hardware revision is %x.%02x\n", hwrevision / 0x100, hwrevision % 0x100);
		fprintf(outFile, "Module Hardware revision is %01x.%01x\n", (hwrevision >> 8) % 0x10, hwrevision % 0x10);
		fprintf(outFile, "Module Firmware revision is %x.%02x\n", fwrevision / 0x100, fwrevision % 0x100);
		fprintf(outFile, "Number of 429RTx channels on this module is %d\n\n", numchans);

		fprintf(outFile, "\n\n");
	}

	fflush(outFile);
	    
    //printf("\nPress any key to exit program\n");
    //_getch();

	fclose(outFile);

#ifdef _WIN32
	system(fileName);
#else
	sprintf(cmd, "less \"%s\"", fileName);
	system(cmd);
#endif
	return 0;
}