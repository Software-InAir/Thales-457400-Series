//
// Created by c.stanley on 16/09/2026.
//


#include "serial.h"



#include "exc4000.h"


int InitializeSerial();

int InitializeSerial() {
    int board_number = 0; // The logical number you assigned in ExcConfig
    int status;

    status = Get_4000Board_Name(25, 0);

    return status;

}