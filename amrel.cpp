
#include <stdio.h>
#include <cstdlib>
#include <cstring>

#include "visa.h"


static ViSession defaultRM;
static ViSession instr;
static ViStatus status;
static ViUInt32 retCount;
static ViUInt32 writeCount;
static unsigned char buffer[100];
static char stringinput[512];

int main(void)
{
   //-------------------------------------------------------- Open Resource Manager
   status=viOpenDefaultRM (&defaultRM);

   if (status < VI_SUCCESS)
   {
      printf("Could not open a session to the VISA Resource Manager!\n");
      exit (EXIT_FAILURE);
   }
   //------------------------------------------------------ Amrel PPS 35-2D
   status = viOpen (defaultRM,  "GPIB0::6::INSTR", VI_NULL, VI_NULL, &instr);
   if (status < VI_SUCCESS)
   {
        printf ("Cannot open a session to the device.\n");
        goto Close;
   }

   status = viSetAttribute (instr, VI_ATTR_TMO_VALUE, 5000);

  //--------------------------------------------------------------------------------- Check Model
   strcpy(stringinput,"MODEL?");
   status = viWrite (instr, (ViBuf)stringinput, (ViUInt32)strlen(stringinput), &writeCount);
   if (status < VI_SUCCESS)
   {
      printf("Error writing to the device\n");
      goto Close;
   }

   status = viRead (instr, buffer, 100, &retCount);
   if (status < VI_SUCCESS)
   {
      printf("Error reading a response from the device\n");
   }

   else
   {
      printf("Data read: %*s\n",retCount,buffer);
   }

    //----------------------------------------------------------------------- Set initial V and turn OUTPUT on

    strcpy(stringinput,"VSET1 12");
    status = viWrite (instr, (ViBuf)stringinput, (ViUInt32)strlen(stringinput), &writeCount);
    if (status < VI_SUCCESS)
    {
        printf("Error writing to the device\n");
        goto Close;
    }

    strcpy(stringinput,"VSET2 12");
   status = viWrite (instr, (ViBuf)stringinput, (ViUInt32)strlen(stringinput), &writeCount);
   if (status < VI_SUCCESS)
   {
      printf("Error writing to the device\n");
      goto Close;
   }

    strcpy(stringinput,"OUT1 ON");
   status = viWrite (instr, (ViBuf)stringinput, (ViUInt32)strlen(stringinput), &writeCount);
   if (status < VI_SUCCESS)
   {
      printf("Error writing to the device\n");
      goto Close;
   }

    strcpy(stringinput,"OUT2 ON");
   status = viWrite (instr, (ViBuf)stringinput, (ViUInt32)strlen(stringinput), &writeCount);
   if (status < VI_SUCCESS)
   {
      printf("Error writing to the device\n");
      goto Close;
   }

    Close:
       printf("Closing Sessions\nHit enter to continue.");
    fflush(stdin);
    getchar();
    status = viClose(instr);
    status = viClose(defaultRM);

   return 0;
}
