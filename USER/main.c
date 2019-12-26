#include "stm32f10x.h"
#include "sys.h"
#include "delay.h"
#include "myiic.h"
#include "VL53L0.h"



int main(void)
{ 
	
	delay_init();
    IIC_Init();
	while(1)
	{ int t;
		t = distance();
	} 	    
}



