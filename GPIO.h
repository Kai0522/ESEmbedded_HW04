#ifndef GPIO_H
#define GPIO_H

void pinMode(unsigned int port , unsigned int pin ,unsigned mode);
void digitalWrite(unsigned int port , unsigned int pin , unsigned int mode);
int digitalRead(unsigned int port , unsigned int pin);

#endif
