#include <Servo.h> //Biblioteca para o servo motor 


Servo mservo; //Objeto para controlar movimento 
int pos; //Variavel para controlar o movimento 

void setup()
{
  mservo.attach(6); //Sinal está na porta 6 do ARDUINO 
  mservo.write(0); //Posição inicial 
}

void loop()
{
  for (pos = 0; pos < 90; pos++){
  	mservo.write(pos); // está na posição zero assim indo até 90
    delay(25);
  }
  delay(1000);
  
  for(pos= 90; pos >= 0; pos --){
  	
    mservo.write(pos); // está na posição 90 vai até 0
    delay(25);
  }
  delay(1000);
}