#include "propiedad.h"

Propiedad::Propiedad(const string& nombre, const ColorCalle& color, int precio, int precioC, int precioA)
{
	m_nombre = nombre;
	m_color = color;
	m_precio = precio;
	m_precioCasa = precioC;
	m_precioAquiler = precioA;
}
