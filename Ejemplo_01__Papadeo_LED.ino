/*
	Ejemplo 1: Parpadeo LED

        Enciende y apaga un LED conectado a la salida digital 8 cada segundo

	El circuito:
	* Entradas: ninguna
        * Salidas: 
          Pin 8: positivo, resistencia 330 Ohm, Led Ánodo
          Ping Gnd: negativo, Led Cátodo
	 
	Autor: J.Caso
        Fecha: 22/01/2013
*/


void setup()   {                
  pinMode(8, OUTPUT);       // Inicializa Pin Digtal 8 como salida
}
 
 
void loop()                     
{
  digitalWrite(8, HIGH);   // Enciende LED 
  delay(1000);              // Espera un segundo
  digitalWrite(8, LOW);    // Apaga LED 
  delay(1000);              // Espera un segundo
}
