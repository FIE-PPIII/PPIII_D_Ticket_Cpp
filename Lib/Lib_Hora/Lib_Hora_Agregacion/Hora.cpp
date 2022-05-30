#include <iostream>

#include "Hora.h"

using namespace std;

// Constructor
Hora::Hora()
{}

Hora::Hora(const int hh, const int mi, const int ss)
{
    this->hh = hh;
    this->mi = mi;
    this->ss = ss;
}

// Destructor
Hora::~Hora()
{}

// Servicio Interno
int Hora::ProcesarCompararHora(const int hh, const int mi, const int ss) const
{
    if (this->hh < hh)
    {
        return -1;
    }

    if (this->hh > hh)
    {
        return 1;
    }

    if (this->mi < mi)
    {
        return -1;
    }

    if (this->mi > mi)
    {
        return 1;
    }

    if (this->ss < ss)
    {
        return -1;
    }

    if (this->ss > ss)
    {
        return 1;
    }

    return 0;
}

// Servicio
int Hora::CompararHora(const int hh, const int mi, const int ss) const
{
    return this->ProcesarCompararHora(hh, mi, ss);
}

int Hora::CompararHora(const Hora hora) const
{
    return this->ProcesarCompararHora(hora.hh, hora.mi, hora.ss);
}

int Hora::ValidarHora() const
{
    if ((this->hh < 0)  || (this->hh > 23))
    {
        return -1;
    }

    if ((this->mi < 0) || (this->mi > 59))
    {
        return -2;
    }

    if ((this->ss < 0) || (this->ss > 59))
    {
        return -3;
    }

    return 0;
}

void Hora::MostrarHora() const
{
    cout << "Hora: " << this->hh << ":" << this->mi << ":" << this->ss << endl << flush;

    return;
}

void Hora::MostrarHora(const string mensaje) const
{
	cout << mensaje << endl << flush;
    cout << "Hora: " << this->hh << ":" << this->mi << ":" << this->ss << endl << flush;

    return;
}

