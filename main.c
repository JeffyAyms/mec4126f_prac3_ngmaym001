// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>

// GLOBAL VARIABLES ----------------------------------------------------------|


// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);                                                   //COMPULSORY

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{

	struct age_data
	{
		uint8_t date_num;
		uint8_t month_num;
		uint16_t year;
		uint8_t age;
	};

	struct age_data my_age;  // declare an instance of struct age_data

	my_age.date_num = 27;
	my_age.month_num = 2;
	my_age.year = 2001;
	my_age.age = 22;

	char buffer[3]; // buffer array to store age
	init_LCD(); // LCD is initialized


	while(1)
	{
		for (uint8_t x=0; x<=(my_age.age); x++)
		{
			delay(50000);
			sprintf(buffer, "%d", x);  // age is stored into buffer array as string
			lcd_putstring(buffer);     // display string onto LCD
			delay(50000);
			lcd_command(CLEAR);       // clear LCD after delay
		}

		}
	}


// OTHER FUNCTIONS -----------------------------------------------------------|




