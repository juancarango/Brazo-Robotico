/*Nombre del programa: Código para brazo robótico controlado por Arduino.
  Versión: 2.3.
  Creado por: Nicolas Garcia Vega, Juan Camilo Arango.
  Modificado por: Nicolas Garcia, Juan Camilo Arango.
  Fecha modificacion: Mayo 04 de 2018.
  */

#include <Servo.h>

#define pinBas 12
#define pinIzq 11
#define pinDer 10
#define pinGar 9

#define De 90
#define Ga 100
#define Iz 170
#define Ba 90

/*La garra cierra con +30*/

Servo Bas;
Servo Izq;
Servo Der;
Servo Gar;

void setup ()
{
  Bas.attach(pinBas);
  Izq.attach(pinIzq);
  Der.attach(pinDer);
  Gar.attach(pinGar);
  Bas.write(Ba);
  Gar.write(Ga);
  Izq.write(Iz);
  Der.write(De);
}

void loop()
{
  Bas.write(Ba-20);
  Der.write(De+30);
  Gar.write(Ga+10);
  delay(500);
  Bas.write(Ba-40);
  Der.write(De+50);
  Gar.write(Ga+20);
  delay(500);
  Der.write(De+70);
  Bas.write(Ba-80);
  Gar.write(Ga+30);
  delay(1000);
  Der.write(De+65);
  Bas.write(Ba-70);
  Gar.write(Ga+20);
  delay(1000);
  Der.write(De+60);
  Bas.write(Ba-65);
  Gar.write(Ga+10);
  delay(1000);
  Der.write(De+55);
  Bas.write(Ba-60);
  Gar.write(Ga+0);
  delay(1000);
  Der.write(De+50);
  Bas.write(Ba-55);
  Gar.write(Ga+10);
  delay(1000);
  Der.write(De+45);
  Bas.write(Ba-50);
  Gar.write(Ga+20);
  delay(1000);
  Der.write(De+35);
  Bas.write(Ba-45);
  Gar.write(Ga+30);
  delay(1000);
  Der.write(De+30);
  Bas.write(Ba-40);
  Gar.write(Ga+20);
  delay(1000);
  Der.write(De+25);
  Bas.write(Ba-35);
  Gar.write(Ga+10);
  delay(1000);
  Der.write(De+20);
  Bas.write(Ba-30);
  Gar.write(Ga+0);
  delay(1000);
  Der.write(De+15);
  Bas.write(Ba-25);
  Gar.write(Ga+10);
  delay(1000);
  Der.write(De+10);
  Bas.write(Ba-20);
  Gar.write(Ga+20);
  delay(1000);
  Der.write(De+5);
  Bas.write(Ba-15);
  Gar.write(Ga+30);
  delay(1000);
  Der.write(De+0);
  Bas.write(Ba-10);
  Gar.write(Ga+20);
  delay(1000);
  Bas.write(Ba-5);
  Der.write(De-5);
  Gar.write(Ga+10);
  delay(1000);
  Bas.write(Ba+0);
  Der.write(De-10);
  Gar.write(Ga+0);
  delay(1000);
  Bas.write(Ba-5);
  delay(1500);
  
  /*   C   A   M   B   I   O   PASOS*/
  
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(1300);
  
  /*Cambio*/
  
  Bas.write(Ba-30);
  delay(300);
  Der.write(De-30);
  Gar.write(Ga+30);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+10);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+0);
  delay(300);
  Bas.write(Ba-30);
  delay(300);
  Der.write(De-30);
  Gar.write(Ga+30);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+10);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+0);
  delay(300);
  
  /*Cambio*/
  
  Bas.write(Ba+30);
  delay(300);
  Der.write(De-30);
  Gar.write(Ga+30);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+10);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+0);
  delay(300);
  Bas.write(Ba+30);
  delay(300);
  Der.write(De-30);
  Gar.write(Ga+30);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+10);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+0);
  delay(300);
  
  /*Cambio*/

  Gar.write(Ga+30);
  Bas.write(Ba+0);
  delay(1000);
  Izq.write(Iz+10);
  delay(300);
  Der.write(De+20);
  Gar.write(Ga+0);
  delay(300);
  Der.write(De-40);
  Gar.write(Ga+30);
  delay(200);
  Izq.write(Iz-5);
  delay(300);
  Gar.write(Ga+30);
  Bas.write(Ba+0);
  delay(300);
  Izq.write(Iz+10);
  delay(300);
  Der.write(De+20);
  Gar.write(Ga+0);
  delay(300);
  Der.write(De-40);
  Gar.write(Ga+30);
  delay(200);
  Izq.write(Iz-5);
  delay(1000);
  Izq.write(Iz-30);
  delay(500);
  Der.write(De-20);
  delay(100);
  Gar.write(Ga+40);
  delay(200);
  Gar.write(Ga+10);
  delay(500);

  /*GIRO 180*/
  
  Bas.write(Ba+90);
  Gar.write(Ga+40);
  delay(500);
  Bas.write(Ba+0);
  Gar.write(Ga+20);
  delay(100);
  Bas.write(Ba-90);
  Gar.write(Ga+0);
  delay(1000);
  
  /*Volver a la posicion*/
  
  Bas.write(Ba-10);
  Der.write(De+20);
  delay(300);
  Bas.write(Ba-20);
  Der.write(De+40);
  delay(300);
  Bas.write(Ba-30);
  delay(300);
  Bas.write(Ba-40);
  delay(1000);
}
