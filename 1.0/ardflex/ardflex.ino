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
const int pinCE = 7;
const int pinCSN = 8;
RF24 tx(pinCE, pinCSN);

const uint64_t pipe = 0xE8E8F0F0E1LL;


//valores de tension y resistencia
const float VCC = 4.98; // Measured voltage of Ardunio 5V line
const float R_DIV = 56000.0; // Measured resistance of 3.3k resistor

//franja
const float STRAIGHT_RESISTANCEp = 34000.0;
const float BEND_RESISTANCEp = 47000.0;

const float STRAIGHT_RESISTANCEi = 77000.0;
const float BEND_RESISTANCEi = 190000.0;

const float STRAIGHT_RESISTANCEdm = 70000.0;
const float BEND_RESISTANCEdm = 115000.0;

const float STRAIGHT_RESISTANCEa = 29000.0;
const float BEND_RESISTANCEa = 95000.0;

const float STRAIGHT_RESISTANCEm = 49000.0;
const float BEND_RESISTANCEm = 68000.0;

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
  // Read the ADC, and calculate voltage and resistance from it
  int flexADCp = analogRead(FLEXp_PIN);
  float flexVp = flexADCp * VCC / 1023.0;
  float flexRp = R_DIV * (VCC / flexVp - 1.0);
  
  int flexADCi = analogRead(FLEXi_PIN);
  float flexVi = flexADCi * VCC / 1023.0;
  float flexRi = R_DIV * (VCC / flexVi - 1.0);
  
  int flexADCdm = analogRead(FLEXdm_PIN);
  float flexVdm = flexADCdm * VCC / 1023.0;
  float flexRdm = R_DIV * (VCC / flexVdm - 1.0);
  
  int flexADCa = analogRead(FLEXa_PIN);
  float flexVa = flexADCa * VCC / 1023.0;
  float flexRa = R_DIV * (VCC / flexVa - 1.0);
  
  int flexADCm = analogRead(FLEXm_PIN);
  float flexVm = flexADCm * VCC / 1023.0;
  float flexRm = R_DIV * (VCC / flexVm - 1.0);
  
  //Serial.println("Resistance: " + String(flexRm) + " ohms");
  //Serial.println("flexADC: " + String(flexADCm) + " ohms");

  // Use the calculated resistance to estimate the sensor's
  // bend angle:
  float angulop = map(flexRp, STRAIGHT_RESISTANCEp, BEND_RESISTANCEp, 0, 110.0);
  float anguloi = map(flexRi, STRAIGHT_RESISTANCEi, BEND_RESISTANCEi, 0, 110.0);
  float angulodm = map(flexRdm, STRAIGHT_RESISTANCEdm, BEND_RESISTANCEdm, 0, 110.0);
  float anguloa = map(flexRa, STRAIGHT_RESISTANCEa, BEND_RESISTANCEa, 0, 110.0);
  float angulom = map(flexRm, STRAIGHT_RESISTANCEm, BEND_RESISTANCEm, 0, 90.0);
  
  Serial.println("Bend: " + String(angulop) + " degrees");

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
  //delay(1000);
}
