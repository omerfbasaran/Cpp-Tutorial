#include "display.h"
#include <stdio.h>
#include <stdint.h>


	void display_init(void)
	{
	printf("DISPLAY INIT!\n");
	}
	
	void dipslay_power_on(void)
	{
		printf("DISPLAY POWER ON!\n");
	}

	void dipslay_power_off(void)
	{
		printf("DISPLAY POWER OFF!\n");
	}

	void dipslay_write_to_screen(int32_t num)
	{
		printf("***************\n");
		printf("SICAKLIK: %d !\n",num);
		printf("***************\n");
	}
