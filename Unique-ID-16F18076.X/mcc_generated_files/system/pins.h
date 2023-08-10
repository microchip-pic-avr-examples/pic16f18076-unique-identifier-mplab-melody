/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define SW_TRIS                 TRISAbits.TRISA0
#define SW_LAT                  LATAbits.LATA0
#define SW_PORT                 PORTAbits.RA0
#define SW_WPU                  WPUAbits.WPUA0
#define SW_OD                   ODCONAbits.ODCA0
#define SW_ANS                  ANSELAbits.ANSA0
#define SW_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SW_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SW_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SW_GetValue()           PORTAbits.RA0
#define SW_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SW_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SW_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define SW_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define SW_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define SW_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define SW_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define SW_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA1 aliases
#define LED_TRIS                 TRISAbits.TRISA1
#define LED_LAT                  LATAbits.LATA1
#define LED_PORT                 PORTAbits.RA1
#define LED_WPU                  WPUAbits.WPUA1
#define LED_OD                   ODCONAbits.ODCA1
#define LED_ANS                  ANSELAbits.ANSA1
#define LED_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_GetValue()           PORTAbits.RA1
#define LED_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
// get/set IO_RB4 aliases
#define TX_TRIS                 TRISBbits.TRISB4
#define TX_LAT                  LATBbits.LATB4
#define TX_PORT                 PORTBbits.RB4
#define TX_WPU                  WPUBbits.WPUB4
#define TX_OD                   ODCONBbits.ODCB4
#define TX_ANS                  ANSELBbits.ANSB4
#define TX_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define TX_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define TX_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define TX_GetValue()           PORTBbits.RB4
#define TX_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define TX_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define TX_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define TX_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define TX_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define TX_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define TX_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/