/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int LEDR1 = 11;          // donar nom al pin 5 de l’Arduino
const int LEDR2 = 10;          // donar nom al pin 6 de l’Arduino
const int LEDG1 = 9;          // donar nom al pin 7 de l’Arduino
const int LEDG2 = 8;          // donar nom al pin 8 de l’Arduino
const int LEDV1 = 7;          // donar nom al pin 9 de l’Arduino
const int LEDV2 = 6;         // donar nom al pin 10 de l’Arduino

unsigned int temps = 500;
//********** Setup ****************************************************************
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}
//********** Loop ****************************************************************
void loop()

{
  digitalWrite(LEDR1, HIGH);
  digitalWrite(LEDG1, LOW);
  digitalWrite(LEDV1, LOW);
  digitalWrite(LEDR2, HIGH);
  digitalWrite(LEDG2, LOW);
  digitalWrite(LEDV2, LOW);
    delay(temps);

  digitalWrite(LEDR1, HIGH);
  digitalWrite(LEDG1, LOW);
  digitalWrite(LEDV1, LOW);
  digitalWrite(LEDR2, LOW);
  digitalWrite(LEDG2, LOW);
  digitalWrite(LEDV2, HIGH);
    delay(4*temps);

  digitalWrite(LEDR1, HIGH);
  digitalWrite(LEDG1, LOW);
  digitalWrite(LEDV1, LOW);
  digitalWrite(LEDR2, LOW);
  digitalWrite(LEDG2, HIGH);
  digitalWrite(LEDV2, LOW);
  delay(temps);

  digitalWrite(LEDR1, HIGH);
  digitalWrite(LEDG1, LOW);
  digitalWrite(LEDV1, LOW);
  digitalWrite(LEDR2, HIGH);
  digitalWrite(LEDG2, LOW);
  digitalWrite(LEDV2, LOW);
  delay(temps);
  
  digitalWrite(LEDR1, LOW);
  digitalWrite(LEDG1, LOW);
  digitalWrite(LEDV1, HIGH);
  digitalWrite(LEDR2, HIGH);
  digitalWrite(LEDG2, LOW);
  digitalWrite(LEDV2, LOW);
  delay(4*temps);

  digitalWrite(LEDR1, LOW);
  digitalWrite(LEDG1, HIGH);
  digitalWrite(LEDV1, LOW);
  digitalWrite(LEDR2, HIGH);
  digitalWrite(LEDG2, LOW);
  digitalWrite(LEDV2, LOW);
  delay(temps);

  digitalWrite(LEDR1, HIGH);
  digitalWrite(LEDG1, LOW);
  digitalWrite(LEDV1, LOW);
  digitalWrite(LEDR2, HIGH);
  digitalWrite(LEDG2, LOW);
  digitalWrite(LEDV2, LOW);
  delay(temps);
}
 
//********** Funcions *************************************************************
