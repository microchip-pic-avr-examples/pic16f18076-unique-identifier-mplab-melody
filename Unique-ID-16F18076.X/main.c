/*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"
#define clrscr() printf("\e[1;1H\e[2J")  //Clear screen

int main(void) {
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    // INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    // INTERRUPT_GlobalInterruptDisable();

    // array to store the unique identifier
    uint16_t MUI[10];


    for (uint8_t i = 0; i <= 8; i++) {
        MUI[i] = DeviceID_Read(DIA_MUI + (i)); // Read from memory and store in array
    }

    while (1) {
        if (SW_GetValue() == 0) // Read the switch value
        {
            __delay_ms(20);
            if (SW_GetValue() == 0) //Read the switch value again after 20ms to account for debouncing
            {
                LED_Toggle(); // Indicator 
                clrscr();

                for (uint8_t i = 0; i <= 8; i++) {
                    printf("\r\n MUI%d = 0x%x", i, MUI[i]); // Print the unique identifier

                }
            }
        }
    }
} 