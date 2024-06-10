
#include <CheapStepper.h> //Importamos la libreria CheapStepper
CheapStepper stepper (8,9,10,11); //Instanciamos la libreria y asignamos los pines a utilizar

char lector; //Creamos una variable de tipo char



void setup() {

  Serial.begin(9600); //Iniciamos la comunicacion serial
  stepper.setRpm(12); //Seteamos las revoluciones por minuto del motor a 12
   
}

void loop() {
  
  lector = Serial.read(); //Leemos lo que hay en la comunicacion serial y lo almacenamos en la varible de tipo char
  
  if(lector == '1'){ //Si lo leido es igual a 1…
    
    stepper.moveDegreesCW (180); //Movemos el motor 180 grados en sentido horario
    delay(1000); //Esperamos 1 segundo
    stepper.moveDegreesCCW (50); //Movemos el motor 50 grados en sentido antihorario
    
  }
    
}