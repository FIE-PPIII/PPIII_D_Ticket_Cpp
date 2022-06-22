#include <iostream>

#include "Ticket.h"

using namespace std;

//-----------------
// Servicio Privado
//-----------------

void Ticket::ParsearDatos()
{
	this->nro = this->ObtenerDatos().substr(0, 10);

	return;
}

//--------------------
// Constructor Publico
//--------------------

Ticket::Ticket()
{}

Ticket::Ticket(const string datos)
{
	this->datos = datos;
	
	this->ParsearDatos();
}

//-------------------
// Destructor Publico
//-------------------

Ticket::~Ticket()
{}

//-----------------
// Servicio Publico
//-----------------

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
