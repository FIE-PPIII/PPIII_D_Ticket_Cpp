#include <stdlib.h>

#include <iostream>

#include "hora.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int estado;

	int dd = atoi("12");
	int mm = atoi("04");
	int aaaa = atoi("2022");

	int hh = atoi("10");
	int mi = atoi("35");
	int ss = atoi("23");

	Hora horaUno;

	horaUno.ObtenerFecha().AsignarDD(dd);
	horaUno.ObtenerFecha().AsignarMM(mm);
	horaUno.ObtenerFecha().AsignarAAAA(aaaa);

	horaUno.AsignarHH(hh);
	horaUno.AsignarMI(mi);
	horaUno.AsignarSS(ss);

	horaUno.MostrarHora("\nDatos de la hora Uno");

    estado = horaUno.ValidarFecha();

    if (estado == -1)
    {
        system("pause");

        return -1;
    }

    estado = horaUno.ObtenerFecha().ValidarFecha();

    if (estado == -1)
    {
        system("pause");

        return -1;
    }

	dd = atoi("16");
	mm = atoi("10");
	aaaa = atoi("2022");

	hh = atoi("12");
	mi = atoi("05");
	ss = atoi("13");

	Hora horaDos(dd, mm, aaaa, hh, mi, ss);

	horaDos.MostrarHora("\nDatos de la hora Dos");

    estado = horaDos.ValidarHora();

    if (estado == -1)
    {
        system("pause");

        return -1;
    }

    estado = horaDos.ObtenerFecha().ValidarFecha();

    if (estado == -1)
    {
        system("pause");

        return -1;
    }

    system("pause");

	return 0;
}
