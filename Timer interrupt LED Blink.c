ISR(TIMER1_COMPA_vect){
  PORTD ^= 0b10000000;
  
}
int main(void){
  
  DDRD = 0b10000000; // set pin 7 to an output
  TCCR1A = 0b00000000;
  TCCR1B = 0b00001101;
  OCR1A = 15624;
  TIMSK1 = 0b00000010;
  sei(); //enable interrupts
  while(1);{
    
  }
}
