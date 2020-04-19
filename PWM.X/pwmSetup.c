#include "PWM.h"
#include "IOSetup.h"
#include "p30F4011.h"

void pwmSetup(void){
 
    
 PWMcontrol = disable;
_PTEN = 0;
_PTCKPS = 0b1;
_PTPER = 1600;

_PMOD1 = 1;

_PEN1L = 1;

_PTEN = 1;

// Testing the motor at different speeds
PDC1 = (PTPER * 2);


 PWMcontrol = enable; 
 
}