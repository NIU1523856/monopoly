#pragma once
#include "definicions.h"

class Propiedad
{
public:
	Propiedad() {};
	Propiedad(const string& nombre, const ColorCalle& color, int precio, int precioC, int precioA);
	~Propiedad() {};

private:
	string m_nombre;
	ColorCalle m_color;

	int m_precio;
	int m_precioCasa;
	int m_precioAquiler[6]; //0->SIN CASAS, 1-4->DE 1 A 4 CASAS REPECTIVAMENTE, 5->HOTEL
};