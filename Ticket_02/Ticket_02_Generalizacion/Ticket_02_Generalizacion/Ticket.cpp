#include <stdlib.h>

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
	string strDD(this->ObtenerDatos().substr(10, 2));
	string strMM(this->ObtenerDatos().substr(12, 2));
	string strAAAA(this->ObtenerDatos().substr(14, 4));

	int dd;
	int mm;
	int aaaa;

	dd = atoi(strDD.c_str());
	mm = atoi(strMM.c_str());
	aaaa = atoi(strAAAA.c_str());

	this->nro = strNRO;
	this->ObtenerFecha()->AsignarDD(dd);
	this->ObtenerFecha()->AsignarMM(mm);
	this->ObtenerFecha()->AsignarAAAA(aaaa);

	return;
}

// Servicio
int Ticket::ValidarDatos()
{
	int estado;
    
	estado = this->ObtenerFecha()->ValidarFecha();

    if (estado == -1)
    {
        cout << "El dia es incorrecto " << this->ObtenerFecha()->ObtenerDD() << endl << flush;

        return -1;
    }

    if (estado == -2)
    {
        cout << "El mes es incorrecto " << this->ObtenerFecha()->ObtenerMM() << endl << flush;

        return -1;
    }

   	if (estado == -3)
    {
        cout << "El a#o es menor a cero " << this->ObtenerFecha()->ObtenerAAAA() << endl << flush;

        return -1;
    }

	return 0;
}

void Ticket::MostrarDatos()
{
	cout << "Datos: " << this->ObtenerDatos() << endl << flush;
	cout << "Nro: " << this->ObtenerNro() << endl << flush;
	
	this->ObtenerFecha()->MostrarFecha();

	return;
}

void Ticket::MostrarDatos(const string mensaje)
{
	cout << mensaje << endl << flush;
	cout << "Datos: " << this->ObtenerDatos() << endl << flush;
	cout << "Nro: " << this->ObtenerNro() << endl << flush;
	
	this->ObtenerFecha()->MostrarFecha();

	return;
}

