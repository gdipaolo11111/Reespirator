#include "Encoder.h"
#include <LiquidCrystal_I2C.h>

//Crear el objeto lcd
LiquidCrystal_I2C lcd(/*Direccion*/0x3F,/*Columnas*/16,/*Filas*/2);

//Crear el objeto Encoder Rotativo
Encoder encoder1(/*PinDT*/ 3,/*PinCLK*/ 2,/*PinSW*/ 9);
int tecla = 0; //Variable donde almacenamos el return de leerEncoder

//Variables a controlar
int rpm = 15;
float vol = 0.5;

//Variable para el menu
int posMenu = 0;
bool editandoMenu = false;



void setup() {
  Serial.begin (9600);
  inicializarPantalla();
  escribirPantalla(rpm, vol, posMenu, 0);
}


void loop() {
  actualizarMenu();
}
