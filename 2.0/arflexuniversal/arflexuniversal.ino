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
int x1i = 0;
int x1dm = 0;
int x1a = 0;
int x1m = 0;

int x2p = 1000;
int x2i = 1000;
int x2dm = 1000;
int x2a = 1000;
int x2m = 1000;

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
  Serial.println("ESPERE");
  for (c=0; c<50; c++)
  {
    int flexADCp = analogRead(FLEXp_PIN);
    int flexADCi = analogRead(FLEXi_PIN);
    int flexADCdm = analogRead(FLEXdm_PIN);
    int flexADCa = analogRead(FLEXa_PIN);
    int flexADCm = analogRead(FLEXm_PIN);

    if (x1p < flexADCp)  // x1 guarda el valor que quiero que sea 180
    {
      x1p = flexADCp;
    }
    if (x1i < flexADCi)
    {
      x1i = flexADCi;
    }
    if (x1dm < flexADCdm)
    {
      x1dm = flexADCdm;
    }
    if (x1a < flexADCa)
    {
      x1a = flexADCa;
    }
    if (x1m < flexADCm)
    {
      x1m = flexADCm;
    }
    delay(20);
  }
  Serial.println("AHORA MANTENGA LA MANO ABIERTA HASTA QUE SE LE INDIQUE");
  delay(6000);
  Serial.println("ESPERE");
  for (a=0; a<50; a++)
  {      
    int flexADCp = analogRead(FLEXp_PIN);
    int flexADCi = analogRead(FLEXi_PIN);
    int flexADCdm = analogRead(FLEXdm_PIN);
    int flexADCa = analogRead(FLEXa_PIN);
    int flexADCm = analogRead(FLEXm_PIN);

    if (x2p > flexADCp) // x2 guarda el valor que quiero que sea 0
    {
      x2p = flexADCp;
    }
    if (x2i > flexADCi)
    {
      x2i = flexADCi;
    }
    if (x2dm > flexADCdm)
    {
      x2dm = flexADCdm;
    }
    if (x2a > flexADCa)
    {
      x2a = flexADCa;
    }
    if (x2m > flexADCm)
    {
      x2m = flexADCm;
    }
    delay(20);
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
  
  int angulop = map(flexADCp,x1p,x2p,180,0);
  angulop = constrain(angulop, 0, 180);
  
  int anguloi = map(flexADCi,x1i,x2i,180,0);
  anguloi = constrain(anguloi, 0, 180);
  
  int angulodm = map(flexADCdm,x1dm,x2dm,180,0);
  angulodm = constrain(angulodm, 0, 180);
  
  int anguloa = map(flexADCa,x1a,x2a,180,0);
  anguloa = constrain(anguloa, 0, 180);
  
  int angulom = map(flexADCm,x1m,x2m,180,0);
  angulom = constrain(angulom, 0, 180);
  
  //Serial.println("Bend: " + String(angulodm) + " degrees");

  int angulo[5];
  angulo [0]=angulop;
  angulo [1]=anguloi;
  angulo [2]=angulodm;
  angulo [3]=anguloa;
  angulo [4]=angulom;

  Serial.print(angulo[0]);
  Serial.print("    ");
  Serial.print(angulo[1]);
  Serial.print("    ");
  Serial.print(angulo[2]);
  Serial.print("    ");
  Serial.print(angulo[3]);
  Serial.print("    ");
  Serial.println(angulo[4]);
  
  //  tx.write(angulo, sizeof (angulo));
  delay(1000);
  
}
