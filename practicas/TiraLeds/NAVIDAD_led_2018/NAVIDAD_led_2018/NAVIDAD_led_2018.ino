
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

#define TIRA_LED_ROJO   10
#define TIRA_LED_AZUL   11




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
  
  short contador;
  
  
  /////////////////////////////////
  // TEST #2 Secuencia latido Corazon
  
  for(contador=0;contador<255;contador++){
    analogWrite(TIRA_LED_ROJO,contador);
    delay(10);
  }
  for(contador=0;contador<256;contador++){
    analogWrite(TIRA_LED_ROJO,(255-contador));
    delay(10);
  }

  for(contador=0;contador<255;contador++){
    analogWrite(TIRA_LED_AZUL,contador);
    delay(10);
  }
  for(contador=0;contador<256;contador++){
    analogWrite(TIRA_LED_AZUL,(255-contador));
    delay(10);
  }
  //Secuencia latido Corazon (FIN)
  
  
  
  /////////////////////////////////
  // TEST #1 encendido y apagado
  /*
  digitalWrite(TIRA_LED_ROJO,HIGH);
  delay(1500);
  digitalWrite(TIRA_LED_ROJO,LOW);
  digitalWrite(TIRA_LED_AZUL,HIGH);
  delay(1000);
  digitalWrite(TIRA_LED_AZUL,LOW);
  delay(500);
  */

}// FIN loop
