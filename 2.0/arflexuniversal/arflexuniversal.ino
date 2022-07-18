/*#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>*/

//paws statement
const int FLEXp_PIN = A1;
const int FLEXi_PIN = A2;
const int FLEXdm_PIN = A3;
const int FLEXa_PIN = A4;
const int FLEXm_PIN = A5;

//variables of the definition of values
int cp = 0;
int ci = 0;
int cdm = 0;
int ca = 0;
int cm = 0;

int ap = 1000;
int ai = 1000;
int adm = 1000;
int aa = 1000;
int am = 1000;

int a = 0;
int c = 0;

//transmitter
/*const int pinCE = 7;
const int pinCSN = 8;
RF24 tx(pinCE, pinCSN);

const uint64_t pipe = 0xE8E8F0F0E1LL;*/

//variable degree of each finger
int gradop; //pulgar
int gradoi; //indice
int gradodm; //del medio
int gradoa; //anular
int gradom; //menique

int angulo[5];

//fuction
int open_closed_hand_measurement(int FLEXp, int FLEXi, int FLEXdm, int FLEXa, int FLEXm);

void setup()
{
  Serial.begin(9600);
  open_closed_hand_measurement(FLEXp_PIN, FLEXi_PIN, FLEXdm_PIN, FLEXa_PIN, FLEXm_PIN);
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
  
  int angulop = map(flexADCp,cp,ap,180,0);
  angulop = constrain(angulop, 0, 180);
  
  int anguloi = map(flexADCi,ci,ai,180,0);
  anguloi = constrain(anguloi, 0, 180);
  
  int angulodm = map(flexADCdm,cdm,adm,180,0);
  angulodm = constrain(angulodm, 0, 180);
  
  int anguloa = map(flexADCa,ca,aa,180,0);
  anguloa = constrain(anguloa, 0, 180);
  
  int angulom = map(flexADCm,cm,am,180,0);
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

int open_closed_hand_measurement(int FLEXp, int FLEXi, int FLEXdm, int FLEXa, int FLEXm)
{
  Serial.println("MANTENGA LA MANO CERRADA HASTA QUE SE LE INDIQUE");
  delay(6000);
  Serial.println("ESPERE");
  for (c=0; c<50; c++)
  {
    int flexADCp = analogRead(FLEXp);
    int flexADCi = analogRead(FLEXi_PIN);
    int flexADCdm = analogRead(FLEXdm_PIN);
    int flexADCa = analogRead(FLEXa_PIN);
    int flexADCm = analogRead(FLEXm_PIN);

    if (cp < flexADCp)  // x1 guarda el valor que quiero que sea 180
    {
      cp = flexADCp;
    }
    if (ci < flexADCi)
    {
      ci = flexADCi;
    }
    if (cdm < flexADCdm)
    {
      cdm = flexADCdm;
    }
    if (ca < flexADCa)
    {
      ca = flexADCa;
    }
    if (cm < flexADCm)
    {
      cm = flexADCm;
    }
    delay(20);
  }
  Serial.println("AHORA MANTENGA LA MANO ABIERTA HASTA QUE SE LE INDIQUE");
  delay(6000);
  Serial.println("ESPERE");
  for (a=0; a<50; a++)
  {      
    int flexADCp = analogRead(FLEXp);
    int flexADCi = analogRead(FLEXi);
    int flexADCdm = analogRead(FLEXdm);
    int flexADCa = analogRead(FLEXa);
    int flexADCm = analogRead(FLEXm);

    if (ap > flexADCp) // x2 guarda el valor que quiero que sea 0
    {
      ap = flexADCp;
    }
    if (ai > flexADCi)
    {
      ai = flexADCi;
    }
    if (adm > flexADCdm)
    {
      adm = flexADCdm;
    }
    if (aa > flexADCa)
    {
      aa = flexADCa;
    }
    if (am > flexADCm)
    {
      am = flexADCm;
    }
    delay(20);
  }
  return (cp, ci, cdm, ca, cm, ap, ai, adm, aa, am);
}
