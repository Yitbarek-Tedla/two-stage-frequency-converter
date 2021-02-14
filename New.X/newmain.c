/*
 * File:   newmain.c
 * Author: hp
 *
 * Created on January 17, 2020, 11:38 AM
 */


#include <xc.h>
#include "newfile.h"
#include <stdlib.h>
#include <stdio.h>

int f = 5;

void main(void) {
    TRISA = 0x00;
    while (1){
        PORTA = 1;
        __delay_ms(f);
        PORTA= PORTA<<1;
        __delay_ms(f);  
        }
    
    //PORTB= 0x02;
    //PORTA = 0x02;
    //RA1 = 0x01;
    
    return;
}
