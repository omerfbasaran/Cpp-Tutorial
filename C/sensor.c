#include "sensor.h"
#include <stdio.h>
#include <stdint.h>

int32_t temp_val[10] = {12,34,42,18,34,58,20,39,31,22};

	void sensor_init(void)
	{
		printf("SENSOR INIT\n");
	}
	
	int32_t sensor_get_temp_value(void)
	{
		static int32_t sayac = 0;
		int32_t temp = 0;
		
		temp = temp_val[sayac];
		sayac++;
		
		if(10==sayac)
		{
			sayac=0;
		}
		return temp;
	}
