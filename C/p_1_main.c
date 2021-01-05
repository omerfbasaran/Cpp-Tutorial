#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "motor.h"
#include "sensor.h"
#include "display.h"

void delay(void);


/*
		Klima kontrol yaz�l�m�
		-Ekran : S�cakl�k de�erini g�steriyor
		-Sens�r: S�cakl�k de�erini �l��yor
		-Motor : �al��t�r�ld���nda so�utma yap�yor
		
		Ekran fonksiyonlar�
		Init()
		Power_on()
		Power_off()
		Write_to_screen(int32_t num)
		
		Sens�r fonksiyonlar�
		Init()
		int32_t Get_Temp_Value()
		
		Motor fonksiyonlar�
		Init()
		on()
		off()
		
		Ana yaz�l�m
		S�cakl��� okuyup ekrana yazd�raca��z
		S�cakl�k kullan�c�n�n girdi�i (25) de�erin �st�ne ��kt���nda
		klima motoru �al��t�r�lacak
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
