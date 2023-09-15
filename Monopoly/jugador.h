#pragma once
#include "definicions.h"
#include "propiedad.h"


class Jugador
{
public:
	Jugador();
	Jugador(const Ficha& f);
	~Jugador() {};

	bool enCarcel() const;
	void toggleCarcel();

	int getDinero() const;
	void setDinero(int cantidad);
	bool variarDinero(int cantidad);

	vector<Propiedad> getPropiedades() const;
	bool

private:
	int m_dinero;
	vector<Propiedad> m_propiedades;

	Ficha m_ficha;
	bool m_carcel;
};


