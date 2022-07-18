#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Servo.h>

//receptor
const int pinCE = 7;
const int pinCSN = 8;
RF24 rx(pinCE, pinCSN);

const uint64_t pipe = 0xE8E8F0F0E1LL;


//servo
Servo pulgar;
Servo indice;
Servo delmedio;
Servo anular;
Servo menique;

//datos de angulo
int angulo[5];
//int entrada;

void setup()
{
  Serial.begin(9600);
  
  //receptor
  rx.begin();
  rx.openReadingPipe(1, pipe);
  rx.startListening();

  //servo
  pulgar.attach(3);
  indice.attach(5);
  delmedio.attach(6);
  anular.attach(9);
  menique.attach(10);
}

void loop() 
{
  if (rx.available())
   {    
      rx.read(angulo, sizeof(angulo));
      
      Serial.print("Dato = " );
      Serial.print(angulo[0]);
      Serial.print(" ");
      Serial.print(angulo[1]);
      Serial.print(" ");
      Serial.print(angulo[2]);
      Serial.print(" ");
      Serial.print(angulo[3]);
      Serial.print(" ");
      Serial.print(angulo[4]);
      Serial.println("");
   }
  pulgar.write(angulo[0]);
  indice.write(angulo[1]);
  delmedio.write(angulo[2]);
  anular.write(angulo[3]);
  //menique.write(angulo[4]);
  //delay(1000);
}
