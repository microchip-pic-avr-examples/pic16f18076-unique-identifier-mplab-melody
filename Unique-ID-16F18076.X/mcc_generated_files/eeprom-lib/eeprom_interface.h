 /**
 * EEPROM generated driver header file.
 *
 * @file eeprom_inteface.h
 * 
 * @ingroup eeprom_interface
 * 
 * @brief This file contains the definition of the EEPROM interface for the EEPROM driver.
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

#ifndef I2C_EEPROM_INTERFACE_H
#define I2C_EEPROM_INTERFACE_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * @ingroup eeprom_interface
 * @struct EEPROM_INTERFACE 
 * @brief Defines the EEPROM interface.
 */
typedef struct EEPROM_INTERFACE
{
    
    bool (*SequentialWrite)(uint32_t address, uint8_t *data, size_t dataLength);
    bool (*SequentialRead)(uint32_t address, uint8_t *data, size_t dataLength);
    bool (*PageWrite)(uint32_t address, uint8_t *data);    
    bool (*PageRead)(uint32_t address, uint8_t *data);
    bool (*ByteWrite)(uint32_t address, uint8_t *data);
    bool (*ByteRead)(uint32_t address, uint8_t *data);
    bool (*IsBusy)(void);
} EEPROM_INTERFACE_t;

#endif // end of I2C_EEPROM_INTERFACE_H
