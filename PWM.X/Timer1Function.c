/* 
 * File:   Timer1Function.c
 * Author: tm2-weber
 *
 * Created on 13 November 2019, 12:25
 */
#include "Timer1Function.h"
#include "IOSetup.h"

void InterruptSetup(void){
    T1CON = 0;              //Clear the Timer 1 configuration
    TMR1 = 0;               //Reset the Timer 1 counter
    PR1 = 20000;            //Set the Timer 1 period (max 65535)
    T1CONbits.TCS = 0;      //Select the internal clock (Fosc/4)
    T1CONbits.TCKPS = 1;    //Prescaler (0=1:1, 1=1:8, )
    Timer1IntPrior = 3;     //Ser the Timer 1 interrupt priority to 3
    Timer1Enable = 1;       //Enable Timer 1 interrupt
    T1CONbits.TON = 1;      //Turn on Timer 1
}

void __attribute__((interrupt, auto_psv)) _T1Interrupt(void){  
    IFS0bits.T1IF=0; //reset the timer 1 interrupt flag
   
    //PMW Duty Cycle Cycle
     /*  static int x = 0;
    
    x++;
    
    if (x < 500)
        PDC1 = (16000 * 0);
    if (x == 500 )
        PDC1 = (16000 * 0.25);
    if (x == 1000)
        PDC1 = (16000 * 0.5);
    if (x == 1500)
        PDC1 = (16000);
    if (x == 2000)
        PDC1 = (16000 * 2);
    if (x == 2500)
        x = 0;
    
   */ 
    
    //PWM question 6
    /*static int x = 0;
    
  
    
    if (x == 0)
        PDC1 = 3200;
    if (x == 50)
        PDC1 = 0;
    
      x++ ;
      
    if (x == 100)
        x = 0;
                
   */
    
}

