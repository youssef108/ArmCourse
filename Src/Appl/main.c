#include "IntCtrl.h"
#include "DIO.h"
#include "PORT.h"
int main(void){
	
	IntCrtl_Init();
	GPIO_init();
	
	pinConfig pincon={1,1,1,1,1,1}; // digital or analog, mode, initial value, direction , internal attach, current
	Port_init(1,1,&pincon);
	while(1){
	//Dio_writeChannel(1,1,1);
	uint8 x=DIO_ReadChannel(1,1);
}
}