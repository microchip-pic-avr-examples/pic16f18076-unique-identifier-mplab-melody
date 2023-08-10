/**
 * EEPROM generated driver source file.
 *
 * @file eeprom.c
 * 
 * @ingroup eeprom
 * 
 * @brief Contains API definitions for the EEPROM driver.
 *
 * @version EEPROM Driver Version 1.0.0
*/
/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include "../../eeprom-lib/eeprom.h"
#include "../../eeprom-lib/eeprom_interface.h"
#include "../../nvm/nvm.h"
#include <stdlib.h>

const EEPROM_INTERFACE_t eeprom_interface = {
    .SequentialWrite = NULL,
    .SequentialRead = NULL,
    .PageWrite = NULL,
    .PageRead = NULL,
    .ByteWrite = EEPROM_ByteWrite,
    .ByteRead = EEPROM_ByteRead,
    .IsBusy = NULL,
};

bool EEPROM_ByteWrite(uint32_t address, uint8_t *data)
{
    bool retStatus = false;
    uint8_t getData = *data;
    uint16_t writeAddress = (uint16_t) (address);
    EEPROM_Write(writeAddress, getData);
    if(writeAddress && getData){
        retStatus = true;
    }
    return retStatus;
}

bool EEPROM_ByteRead(uint32_t address, uint8_t *data)
{
    bool retStatus = false;
    uint16_t readAddress = (uint16_t) (address);
    data = (uint8_t *) EEPROM_Read(readAddress);
    if(data){
        retStatus = true;
    }
    return retStatus;
}


