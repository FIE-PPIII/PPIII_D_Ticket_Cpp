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
	string strHH(this->ObtenerDatos().substr(18, 2));
	string strMI(this->ObtenerDatos().substr(20, 2));
	string strSS(this->ObtenerDatos().substr(22, 2));

	int dd;
	int mm;
	int aaaa;
	
	dd = atoi(strDD.c_str());
	mm = atoi(strMM.c_str());
	aaaa = atoi(strAAAA.c_str());

	this->nro = strNRO;
	this->ObtenerHora()->ObtenerFecha()->AsignarDD(dd);
	this->ObtenerHora()->ObtenerFecha()->AsignarMM(mm);
	this->ObtenerHora()->ObtenerFecha()->AsignarAAAA(aaaa);

	int hh;
	int mi;
	int ss;

	hh = atoi(strHH.c_str());
	mi = atoi(strMI.c_str());
	ss = atoi(strSS.c_str());

	this->ObtenerHora()->AsignarHH(hh);
	this->ObtenerHora()->AsignarMI(mi);
	this->ObtenerHora()->AsignarSS(ss);

	return;
}

// Servicio
int Ticket::Validar()
{
	int estado;
	Fecha * fecha = (Fecha *) this;

	estado = (*fecha).Fecha::Validar();
    
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

	Hora * hora = (Hora *) this;

	estado = (*hora).Hora::Validar();

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

void Ticket::Mostrar()
{
	cout << "Datos: " << this->ObtenerDatos() << endl << flush;
	cout << "Nro: " << this->ObtenerNro() << endl << flush;

	Hora * hora = (Hora *) this;
	
	(*hora).Hora::Mostrar();
	
	return;
}

void Ticket::Mostrar(const string mensaje)
{	
	cout << mensaje << endl << flush;
	cout << "Datos: " << this->ObtenerDatos() << endl << flush;
	cout << "Nro: " << this->ObtenerNro() << endl << flush;

	Hora * hora = (Hora *) this;

	(*hora).Hora::Mostrar();

	return;
}

