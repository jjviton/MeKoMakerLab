
/*************************************************************************************************************
 * TITULO DE LA FUNCION DEL PROGRAMA
 * Programador: J3viton 
 * Fecha: Nov 2018
 * version: beta0
 * 
 * Description: blabla
 * 
 * 
 *************************************************************************************************************/



//includes


// DECLARACION DE CONSTANTES
#define TRUE  1
#define FALSE 0

#define TIRA_LED_ROJO  4
#define TIRA_LED_AZUL 7




// DECLARACION DE VARIABLES
byte contador;






/////////////////////////////////////////////////////////////////////
// Funcion SETUP 

void setup() {
  // put your setup code here, to run once:
  pinMode(TIRA_LED_ROJO,OUTPUT);
  pinMode(TIRA_LED_AZUL,OUTPUT);
  // inicializan las variables
  

}// fin setup




//////////////////////////////////////////////////////////////////////
//
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TIRA_LED_ROJO,HIGH);
  delay(1500);
  digitalWrite(TIRA_LED_ROJO,LOW);
  digitalWrite(TIRA_LED_AZUL,HIGH);
  delay(1000);
  digitalWrite(TIRA_LED_AZUL,LOW);
  delay(500);


}// FIN loop
