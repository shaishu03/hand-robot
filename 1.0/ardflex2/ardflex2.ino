#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

//declaración de patas
const int FLEXp_PIN = A1;
const int FLEXi_PIN = A2;
const int FLEXdm_PIN = A3;
const int FLEXa_PIN = A4;
const int FLEXm_PIN = A5;

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

  tx.begin();
  tx.openWritingPipe(pipe);
}

void loop()
{
  int flexADCp = analogRead(FLEXp_PIN);
  int flexADCi = analogRead(FLEXi_PIN);
  int flexADCdm = analogRead(FLEXdm_PIN);
  int flexADCa = analogRead(FLEXa_PIN);
  int flexADCm = analogRead(FLEXm_PIN);

  Serial.println(flexADCm); //evaluar rangos de cada uno  (x,valor flexionado, valor sin flexionar, 0, 180)
  
  int angulop = map(flexADCp,400,700,180,0);
  angulop = constrain(angulop, 0, 180);
  
  int anguloi = map(flexADCi,400,700,180,0);
  anguloi = constrain(anguloi, 0, 180);
  
  int angulodm = map(flexADCdm,230,390,180,0);
  angulodm = constrain(angulodm, 0, 180);
  
  int anguloa = map(flexADCa,545,615,180,0);
  anguloa = constrain(anguloa, 0, 180);
  
  int angulom = map(flexADCm,400,700,180,0);
  angulom = constrain(angulom, 0, 180);
  
 // Serial.println("Bend: " + String(angulodm) + " degrees");

  //int angulo[5];
  angulo [0]=angulop;
  angulo [1]=anguloi;
  angulo [2]=angulodm;
  angulo [3]=anguloa;
  angulo [4]=angulom;

  //Serial.println(angulo[0]);
  //Serial.println(angulo[1]);
  //Serial.println(angulo[2]);
  //Serial.println(angulo[3]);
  //Serial.println(angulo[4]);*/
  
  tx.write(angulo, sizeof (angulo));
  delay(1000);
}
