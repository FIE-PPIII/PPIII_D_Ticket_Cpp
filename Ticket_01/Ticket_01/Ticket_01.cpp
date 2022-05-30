#include "Ticket.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	Ticket ticketUno("5639780324");
	Ticket ticketDos("9834572031");
	Ticket ticketTres;
	
	ticketTres.AsignarDatos("3781342311");

	ticketUno.MostrarDatos("\nDatos del ticket Uno");
	
	ticketDos.MostrarDatos("\nDatos del ticket Dos");
	
	ticketTres.MostrarDatos("\nDatos del ticket Tres");
		
	system("pause");

	return 0;
}

