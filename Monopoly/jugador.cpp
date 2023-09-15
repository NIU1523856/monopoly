#include "jugador.h"

Jugador::Jugador()
{
	m_dinero = DINERO_INICIAL;
	m_carcel = false;
}

Jugador::Jugador(const Ficha& f)
{
	m_dinero = DINERO_INICIAL;
	m_ficha = f;
	m_carcel = false;
}

inline bool Jugador::enCarcel() const
{
	return m_carcel;
}

void Jugador::toggleCarcel()
{
	if (m_carcel)
		m_carcel = false;
	else
		m_carcel = true;
}

int Jugador::getDinero() const
{
	return m_dinero;
}

void Jugador::setDinero(int cantidad)
{
	m_dinero = cantidad;
}

bool Jugador::variarDinero(int cantidad)
{
	bool possible = true;
	if (cantidad >= 0)
		m_dinero += abs(cantidad);
	else
		m_dinero -= abs(cantidad);

	if (m_dinero < 0)
	{
		possible = false;
		m_dinero += cantidad;
	}
	return possible;
}

vector<Propiedad> Jugador::getPropiedades() const
{
	return m_propiedades;
}
