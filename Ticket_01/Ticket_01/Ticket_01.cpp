#include <iostream>

#include "Ticket.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	Ticket ticketUno("5639780324");

	ticketUno.MostrarDatos("\nDatos del ticket Uno");

	Ticket ticketDos("9834572031");

	ticketDos.MostrarDatos("\nDatos del ticket Dos");

	Ticket ticketTres;

	ticketTres.AsignarDatos("3781342311");

	ticketTres.MostrarDatos("\nDatos del ticket Tres");

	cout << "Presione ENTER" << endl << flush;

	system("pause");

	return 0;
}