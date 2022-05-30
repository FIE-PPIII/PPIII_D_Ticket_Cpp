#include <iostream>

#include "Ticket.h"

using namespace std;

// Constructor
Ticket::Ticket()
{}

Ticket::Ticket(const string datos)
{
	this->datos = datos;
	
	this->ParsearDatos();
}

// Destructor
Ticket::~Ticket()
{}

// Servicio Interno
void Ticket::ParsearDatos()
{
	string strNRO(this->ObtenerDatos().substr(0, 10));

	this->nro = strNRO;

	return;
}

// Servicio
void Ticket::MostrarDatos() const
{
	cout << "Datos: " << this->ObtenerDatos() << endl << flush;
	cout << "Nro: " << this->ObtenerNro() << endl << flush;

	return;
}

void Ticket::MostrarDatos(const string mensaje) const
{
	cout << mensaje << endl << flush;
	cout << "Datos: " << this->ObtenerDatos() << endl << flush;
	cout << "Nro: " << this->ObtenerNro() << endl << flush;

	return;
}
