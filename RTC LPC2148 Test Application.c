Test application: 
#includeslpc214x.h> 
#include<stdio.h> 
#include"rte_yapphdr.h" 
unsigned char templ; 
unsigned char temp2 
unsigned long int temp,r=0; 
unsigned char *ptr,disp[] = "TIME:",disp1[]= "DATE:"; // Function prototypes
int main(void) 
struct rtc_prv_data pdata; 
rtc_init(&pdata,0); 
struct rtc_device_apis *rtc_api; 
rtc_api= rtc_device_open(); 
rtc_api->rtc_set_time (00,15,2,16,0,0,7,2019,&pdata):// call to API's 
rtc_api->rtc_clock_source(0,20000000,&pdata); 
rtc_api->rtc_enable(1,&pdata); 
100DIR =0x000000FC; lconfigure o/p lines for led 
100PIN = 0x00000000;delay(3200); /delay 
lcd_init(); INcd intialisation 
delay(3200) /delay 
clr_disp(): Iclear display 
//….LCD DISPLAY CODE....//

while(1) 
templ=0x80;// Display starting address of first line 1st pos 
led_com();
delay(645); 
ptr=dispP 
while(ptr!l=\0) 
tempi *ptr;
delay(3200); 
lcd data); 
ptr ++; delay(3200); 
templ=48+(HOUR/10); 
delay(3200); 
Icd_data); 
delay(3200); 
empl=48+(HOUR%10);
delay(3200); 
lcd_data();
delay(3200); 
temp1=’:’;
delay(3200);
lcd_data();
delay(3200);

// repeat similar code for minutes and seconds 
Temp1=0xC0:// Display starting address of second line 4th pos 
lcd_com();
delay(800): 
ptr = displ ;
while( ptr!=’\0’)
{ 
Temp1 = *ptr; delay(3200); 
Ied_data(); 
ptr ++; delay(3200); 
}
Temp1= 48+(DOM/10); delay(3200); 
lcd data(); delay(3200) 
templ =48+(DOM%10); delay(3200); 
lcd data(); delay(3200); 
temp1=’/’; delay(3200); 
led_data(); delay(3200); 
// repeat similar code for month and year 
}
} //end of main()
