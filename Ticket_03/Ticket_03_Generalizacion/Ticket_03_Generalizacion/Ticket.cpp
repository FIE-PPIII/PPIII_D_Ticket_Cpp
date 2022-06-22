#include <stdlib.h>

#include <iostream>

#include "Ticket.h"

using namespace std;

//-----------------
// Servicio Privado
//-----------------

void Ticket::ParsearDatos()
{
	this->nro = this->ObtenerDatos().substr(0, 10);

	int dd = atoi(this->ObtenerDatos().substr(10, 2).c_str());
	int mm = atoi(this->ObtenerDatos().substr(12, 2).c_str());
	int aaaa = atoi(this->ObtenerDatos().substr(14, 4).c_str());

	Hora::Fecha::AsignarDD(dd);
	Hora::Fecha::AsignarMM(mm);
	Hora::Fecha::AsignarAAAA(aaaa);

	int hh = atoi(this->ObtenerDatos().substr(18, 2).c_str());
	int mi = atoi(this->ObtenerDatos().substr(20, 2).c_str());
	int ss = atoi(this->ObtenerDatos().substr(22, 2).c_str());

	Hora::AsignarHH(hh);
	Hora::AsignarMI(mi);
	Hora::AsignarSS(ss);

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

	estado = this->ObtenerHora()->ValidarHora();

    if (estado == -1)
    {
        cout << "La hora es incorrecta " << this->ObtenerHora()->ObtenerHH() << endl << flush;

        return -1;
    }

    if (estado == -2)
    {
        cout << "Los minutos son incorrectos " << this->ObtenerHora()->ObtenerMI() << endl << flush;

        return -1;
    }

   	if (estado == -3)
    {
        cout << "Los segundos son incorrectos " << this->ObtenerHora()->ObtenerSS() << endl << flush;

        return -1;
    }

	return 0;
}

void Ticket::MostrarDatos()
{
	cout << "Datos: " << this->ObtenerDatos() << endl << flush;
	cout << "Nro: " << this->ObtenerNro() << endl << flush;

	Hora::MostrarHora();

	return;
}

void Ticket::MostrarDatos(const string mensaje)
{
	cout << mensaje << endl << flush;

	cout << "Datos: " << this->ObtenerDatos() << endl << flush;
	cout << "Nro: " << this->ObtenerNro() << endl << flush;

	Hora::MostrarHora();

	return;
}
