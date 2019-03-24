#include "GPIO.h"
#include "reg.h"

int main(){
    pinMode(GPIO_PORTA,0,INPUT);
    pinMode(GPIO_PORTD,15,OUTPUT);
    digitalWrite(GPIO_PORTD,15,LOW);
    int a=0;
    while(1){
        if(digitalRead(GPIO_PORTA,0)==1) a=1;
        if(a==1){
            digitalWrite(GPIO_PORTD,15,HIGH);
            delay();
            digitalWrite(GPIO_PORTD,15,LOW);
            delay();
        }
    }
}
