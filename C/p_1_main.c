#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "motor.h"
#include "sensor.h"
#include "display.h"

void delay(void);


/*
		Klima kontrol yazýlýmý
		-Ekran : Sýcaklýk deðerini gösteriyor
		-Sensör: Sýcaklýk deðerini ölçüyor
		-Motor : Çalýþtýrýldýðýnda soðutma yapýyor
		
		Ekran fonksiyonlarý
		Init()
		Power_on()
		Power_off()
		Write_to_screen(int32_t num)
		
		Sensör fonksiyonlarý
		Init()
		int32_t Get_Temp_Value()
		
		Motor fonksiyonlarý
		Init()
		on()
		off()
		
		Ana yazýlým
		Sýcaklýðý okuyup ekrana yazdýracaðýz
		Sýcaklýk kullanýcýnýn girdiði (25) deðerin üstüne çýktýðýnda
		klima motoru çalýþtýrýlacak
*/

int main(int argc, char *argv[]) {
	
	//Bir seferlik
	// Baslatma
	int32_t temp=0;
	display_init();
	motor_init();
	sensor_init();
	dipslay_power_on();
	
	
	while(1)
	{
		temp=sensor_get_temp_value();
		dipslay_write_to_screen(temp);
		
		if(temp>25)
		{
			motor_on();
		}
		else
		{
			motor_off();
		}
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		
	}
	
	
	return 0;
}

void delay()
{
	int64_t t =0;
	for(t=0; t<16000000;t++)
	{
	}
}
