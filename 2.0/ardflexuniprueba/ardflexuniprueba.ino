/*#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>*/

//declaración de patas
const int FLEXp_PIN = A1;
const int FLEXi_PIN = A2;
const int FLEXdm_PIN = A3;
const int FLEXa_PIN = A4;
const int FLEXm_PIN = A5;

//variables de la definicion de valores
int x1p = 0;

int x2p = 1000;

int a = 0;
int c = 0;

//transmisor
/*const int pinCE = 7;
const int pinCSN = 8;
RF24 tx(pinCE, pinCSN);

const uint64_t pipe = 0xE8E8F0F0E1LL;*/

//variables grado de cada dedo
int gradop; //pulgar
int gradoi; //indice
int gradodm; //del medio
int gradoa; //anular
int gradom; //menique

int angulo[5];

void setup()
{
  Serial.begin(9600);

  Serial.println("MANTENGA LA MANO CERRADA HASTA QUE SE LE INDIQUE");
  delay(6000);
  Serial.println("ESPERE ");
  for (c=0; c<50; c++)
  {
    int flexADCp = analogRead(FLEXp_PIN);
    int flexADCi = analogRead(FLEXi_PIN);
    int flexADCdm = analogRead(FLEXdm_PIN);
    int flexADCa = analogRead(FLEXa_PIN);
    int flexADCm = analogRead(FLEXm_PIN);

    if (x1p < flexADCdm)  // x1 guarda el valor que quiero que sea 180
    {
      x1p = flexADCdm;
    }
    delay(50);
  }
  Serial.println("AHORA MANTENGA LA MANO ABIERTA HASTA QUE SE LE INDIQUE");
  delay(6000);
  Serial.println("ESPERE ");
  for (a=0; a<50; a++)
  {      
    int flexADCp = analogRead(FLEXp_PIN);
    int flexADCi = analogRead(FLEXi_PIN);
    int flexADCdm = analogRead(FLEXdm_PIN);
    int flexADCa = analogRead(FLEXa_PIN);
    int flexADCm = analogRead(FLEXm_PIN);

    if (x2p > flexADCdm) // x2 guarda el valor que quiero que sea 0
    {
      x2p = flexADCdm;
    }
    delay(50);
  }
  
  /*tx.begin();
  tx.openWritingPipe(pipe);*/
}

void loop()
{
  int flexADCp = analogRead(FLEXp_PIN); //crearla arriba
  int flexADCi = analogRead(FLEXi_PIN);
  int flexADCdm = analogRead(FLEXdm_PIN);
  int flexADCa = analogRead(FLEXa_PIN);
  int flexADCm = analogRead(FLEXm_PIN);
  
  int angulop = map(flexADCdm,x1p,x2p,180,0);
  angulop = constrain(angulop, 0, 180);
  
  //Serial.println("Bend: " + String(angulodm) + " degrees");

  int angulo[5];
  angulo [0]=angulop;
  //angulo [1]=anguloi;
  //angulo [2]=angulodm;
  //angulo [3]=anguloa;
  //angulo [4]=angulom;

  Serial.println(angulo[0]);
  //Serial.println(angulo[1]);
  //Serial.println(angulo[2]);
  //Serial.println(angulo[3]);
  //Serial.println(angulo[4]);
  
  //  tx.write(angulo, sizeof (angulo));
  delay(1000);
  
}
