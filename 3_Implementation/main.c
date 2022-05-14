#include<reg51.h>
#include<stdio.h>
#include<intrins.h>
#define lcd P1
#define RAIN P2

sbit rs=P3^5; //for register select
sbit rw=P3^6; //for RW
sbit en=P3^7; //for enable
sbit motor_pin=P3^2;   //for running the motor
sbit trg=P3^4; //for providing a toggle for the ADC
 
void lcd_init();                                  //for lcd interfacing
void cmd(unsigned char);                          //for seting up the lcd row for input
void dat(unsigned char);                          //for printing dataa on lcd
void delay();                                     //tsimple delay
void Delay_servo(unsigned int us);                //this delay is used to create a signal for running the servo motor
void knob(unsigned int range);                    //for back and forth motion of servo motor
void lcd_string(char *s);                         //the result that needs to be printed
void delay2(unsigned int ms);                     //for adjusting speed of the servo motor

 
void main()
{
		EA = 1;
		EX0 = 1;
		IT0 = 1;
    lcd_init();
		lcd_string("Weather Status");
    while(1) {
				trg = 1;
				delay();
				trg = 0;
        if(RAIN >= 0 && RAIN < 64) {               //the if else statements help in setting the result for the screen after recieving the signal from the sensor
            cmd(0xc0);
            lcd_string("  Heavy Rain  ");
						knob(400);
        } else if(RAIN >= 64 && RAIN < 128){
            cmd(0xc0);
            lcd_string(" Moderate Rain ");
						knob(1000);
        } else if(RAIN >= 128 && RAIN < 192){
            cmd(0xc0);
            lcd_string(" Rain Warning ");
        } else if(RAIN >= 192 && RAIN < 256){
            cmd(0xc0);
            lcd_string(" No Rain ");
        }
    }
}
 
void lcd_init()                                //for lcd interfacing
{
		delay();
    cmd(0x38);
    cmd(0x0e);
    cmd(0x01);
    cmd(0x80);
}
 
void cmd(unsigned char a)                     //for seting up the lcd row for inpu
{
    lcd=a;
    rs=0;
    rw=0;
    en=1;
    delay();
    en=0;
		delay();
}
 
void dat(unsigned char b)                     //for printing dataa on lcd
{
    lcd=b;
    rs=1;
    rw=0;
    en=1;
    delay();
    en=0;
		delay();
}
 
void lcd_string(char *s)                     //the result that needs to be printed
{
    while(*s) {
       dat(*s++);
     }
}
	

void delay()                                  //tsimple delay
{
    unsigned int i;
    for(i=0;i<20000;i++);
}

void knob(unsigned int range)                 //for back and forth motion of servo motor
{
    //Turn to 180 degree
    motor_pin = 1;
    Delay_servo(180);
    motor_pin = 0;
    delay2(range);

    //Turn to 0 degree
    motor_pin=1;
    Delay_servo(50);
    motor_pin=0;
    delay2(range);
}

void Delay_servo(unsigned int us)             //this delay is used to create a signal for running the servo motor
{
	while(us--)
	{
    _nop_();
  }		
}

void delay2(unsigned int ms)                  //for adjusting speed of the servo motor
{
  unsigned long int us = ms*1000;
  while(us--)
  {
    _nop_();
  }
}
