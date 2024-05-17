/* definitions / defines file */
#define DEFS_H

#define SW_VERSION		13   /* i.e. major.minor software version nbr. */

#ifndef NULL
#define NULL  0
#endif
        
// logix ...
#define TRUE	1
#define FALSE	0 
#define DUMMY	0

#define wdogtrig()			#asm("wdr") // call often if Watchdog timer enabled

#define CR				0x0D
#define LF				0x0A  

#ifndef GREEN
#define GREEN 0xFF0000
#endif

#ifndef RED
#define RED 0x00FF00
#endif

#ifndef BLUE 
#define BLUE 0x0000FF
#endif

#ifndef YELLOW 
#define YELLOW 0xFFFF00
#endif

#ifndef PURPLE 
#define PURPLE 0x00FFFF 
#endif


#ifndef LED_NR 
#define LED_NR 64 
#endif

#ifndef INFO_SIZE 
#define INFO_SIZE 24 
#endif

#define PORTD7  7




#define LED1 PORTD.6        // PORTx is used for output
#define SW1 PIND.5          // PINx is used for input
#define TESTP PORTD.4       // test bit durations
#include "funct.h"

