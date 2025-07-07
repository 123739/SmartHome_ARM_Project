#include<lpc21xx.h>

void delay()
{
unsigned int x;
for (x=0; x<100000; x++);
}

void main()
{

//declaring pins 16 to 20 of port 1 as outputs
IODIR1 |= ((1<<16)|(1<<17)|(1<<18)|(1<<19)|(1<<20));

//decalring pins 10 to 14 of port 0 as inputs
IODIR0 &= ~((1<<10)|(1<<11)|(1<<12)|(1<<13)|(1<<14));

while (1)
{
int temp_fan = (IOPIN0 & (1<<10));
int temp_AC = (IOPIN0 & (1<<11));
int motion = (IOPIN0 & (1<<12));
int gas = (IOPIN0 & (1<<13));
int override = (IOPIN0 & (1<<14));

if ((IOPIN0 & (1<<14)))
{
IOCLR1 = ((1<<16)|(1<<17)|(1<<18)|(1<<19)|(1<<20));
}

else
{
// FAN
if ((IOPIN0 & (1<<10)))
IOSET1 |=(1<<16);
else 
IOCLR1 |=(1<<16);

// AC
if ((IOPIN0 & (1<<11)))
IOSET1 |=(1<<17);
else 
IOCLR1 |=(1<<17);

// LIGHT
if ((IOPIN0 & (1<<12)))
IOSET1 |=(1<<18);
else 
IOCLR1 |=(1<<18);

// SMOKE DETECTOR
if ((IOPIN0 & (1<<13)))
{
IOSET1 |=(1<<19); // warning LED
IOCLR1 |=(1<<20);  // buzzer
}

else 
{
IOCLR1 |=(1<<19);
IOCLR1 |=(1<<20);
}
}
 delay();
}
}
