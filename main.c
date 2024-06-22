#include"header.h"

OS_TID tid2;
u32 temp_result,psr_result;

__task void task2(void)
{
	
	for(;;)
	{
		
		
		uart0_tx_string("\r\npsr: ");
		uart0_tx_float(psr_result);
		uart0_tx_string("\r\ntemp: ");
		uart0_tx_float(temp_result);
		
		os_dly_wait(1);
	}
}

__task void task1(void)
{
	u32 adc_val,Vout;
	tid2=os_tsk_create(task2,1);
	for(;;)
	{
		adc_val=adc_read(1); 
		Vout=(adc_val*3.3)/1023; //lpc2148 have 10 bit adc resolution
		temp_result=(Vout-0.5)/0.01; //mcp9700 temp sensor conversion formula
		
		psr_result=adc_read(2);
	}
}

main()
{
	uart0_init(9600);
	adc_init();
	os_sys_init(task1);
}
