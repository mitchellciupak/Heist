#include "stm32f0xx.h"
#include "stm32f0_discovery.h"
#include <stdio.h>
#include <stdlib.h>

#include "menu.h"

//Function Declarations
int chooseDifficulty(void);
int init_7seg(void);

int main(void)
{
	/*Game Menu*/
	int difficulty = startupRoutine();
	//int difficulty = chooseDifficulty();


}


int chooseDifficulty(void) {
	//enable the clock to GPIOA
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;

	//Set PA0 to input mode (00)
	GPIOA->MODER &= 0b00;

	int diff = 0;
	while(diff == 0) {
		//Read input
		diff = GPIOA->IDR & 1;
	}
	return diff;
}

