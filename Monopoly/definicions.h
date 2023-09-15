#pragma once

#include <iostream>

#include <vector>
#include <string>

using namespace std;

const int DINERO_INICIAL = 1500;
const int DINERO_SALIDA = 200;
const int FIANZA_CARCEL = 100;

typedef enum Ficha
{
	SOMBRERO,
	BOTA,
	BARCO,
	CARRETA,
	DEDAL,
	COCHE,
	PERRO,
	GATO
};

typedef enum ColorCalle
{
	MARRON,
	CIAN,
	MORADO,
	NARANJA,
	ROJO,
	AMARILLO,
	VERDE,
	AZUL
};