#include <iostream>

#include "Ticket.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int estado;
	Ticket ticketUno("563978032412042022103523");
	Ticket ticketDos("983457203107052022183458");
	Ticket ticketTres;
	
	ticketTres.AsignarDatos("378134231123062022145312");

	ticketUno.MostrarDatos("\nDatos del ticket Uno");

    estado = ticketUno.ValidarDatos();

    if (estado == -1)
    {
        system("pause");

        return -1;
    }
   
    ticketDos.MostrarDatos("\nDatos del ticket Dos");

    estado = ticketDos.ValidarDatos();

    if (estado == -1)
    {
        system("pause");

        return -1;
    }

    ticketTres.MostrarDatos("\nDatos del ticket Tres");

    estado = ticketTres.ValidarDatos();

    if (estado == -1)
    {
        system("pause");

        return(estado);
    }

    cout << "\nCompara los tres atributos de la primera fecha y envio como parametros los tres atributos de segunda fecha" << endl << flush;
    estado = ticketUno.ObtenerFecha().CompararFecha(ticketDos.ObtenerFecha().ObtenerDD(), ticketDos.ObtenerFecha().ObtenerMM(), ticketDos.ObtenerFecha().ObtenerAAAA());

    if (estado == 1)
    {
        cout << "La primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << " es mayor a la segunda " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << endl << flush;
    }
    else
    {
        if (estado == -1)
        {
            cout << "La segunda " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << " es mayor a la primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << endl << flush;
        }
        else
        {
        	estado = ticketUno.ObtenerHora().CompararHora(ticketDos.ObtenerHora().ObtenerHH(), ticketDos.ObtenerHora().ObtenerMI(), ticketDos.ObtenerHora().ObtenerSS());
                
			if (estado == 1)
        	{
				cout << "La primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << " es mayor a la segunda " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << endl << flush;
        	}
			else
			{
				if (estado == 1)
    	    	{
					cout << "La segunda " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << " es mayor a la primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << endl << flush;
            	}
            	else
            	{
					cout << "La primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << " es igual a la segunda " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << endl << flush;
        		}        	
			}
    	}		
    }

    cout << "\nCompara los tres atributos de la primera fecha y envio como parametro la tercera fecha" << endl << flush;
    estado = ticketUno.ObtenerFecha().CompararFecha(ticketTres.ObtenerFecha());

    if (estado == 1)
    {
        cout << "La primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << " es mayor a la tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << endl << flush;
    }
    else
    {
        if (estado == -1)
        {
            cout << "La tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << " es mayor a la primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << endl << flush;
        }
        else
        {
        	estado = ticketUno.ObtenerHora().CompararHora(ticketTres.ObtenerHora().ObtenerHH(), ticketTres.ObtenerHora().ObtenerMI(), ticketTres.ObtenerHora().ObtenerSS());
                
			if (estado == 1)
        	{
				cout << "La primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << " es mayor a la tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << endl << flush;
        	}
			else
			{
				if (estado == 1)
    	    	{
					cout << "La Tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << " es mayor a la primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << endl << flush;
            	}
            	else
            	{
					cout << "La primera " << ticketUno.ObtenerFecha().ObtenerDD() << "/" << ticketUno.ObtenerFecha().ObtenerMM() << "/" << ticketUno.ObtenerFecha().ObtenerAAAA() << " " << ticketUno.ObtenerHora().ObtenerHH() << ":" << ticketUno.ObtenerHora().ObtenerMI() << ":" << ticketUno.ObtenerHora().ObtenerSS() << " es igual a la tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << endl << flush;
        		}        	
			}
        }
    }

    cout << "\nCompara los tres atributos de la segunda fecha y envio como parametro la tercera fecha" << endl << flush;
    estado = ticketDos.ObtenerFecha().CompararFecha(ticketTres.ObtenerFecha());

    if (estado == 1)
    {
        cout << "La segunda " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << " es mayor a la tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << endl << flush;
    }
    else
    {
        if (estado == -1)
        {
            cout << "La tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << " es mayor a la segunda " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << endl << flush;
        }
    	else
        {
        	estado = ticketDos.ObtenerHora().CompararHora(ticketTres.ObtenerHora().ObtenerHH(), ticketTres.ObtenerHora().ObtenerMI(), ticketTres.ObtenerHora().ObtenerSS());
                
			if (estado == 1)
        	{
				cout << "La segunda " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << " es mayor a la tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << endl << flush;
        	}
			else
			{
				if (estado == 1)
    	    	{
					cout << "La Tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << " es mayor a la primera " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << endl << flush;
            	}
            	else
            	{
					cout << "La segunda " << ticketDos.ObtenerFecha().ObtenerDD() << "/" << ticketDos.ObtenerFecha().ObtenerMM() << "/" << ticketDos.ObtenerFecha().ObtenerAAAA() << " " << ticketDos.ObtenerHora().ObtenerHH() << ":" << ticketDos.ObtenerHora().ObtenerMI() << ":" << ticketDos.ObtenerHora().ObtenerSS() << " es igual a la tercera " << ticketTres.ObtenerFecha().ObtenerDD() << "/" << ticketTres.ObtenerFecha().ObtenerMM() << "/" << ticketTres.ObtenerFecha().ObtenerAAAA() << " " << ticketTres.ObtenerHora().ObtenerHH() << ":" << ticketTres.ObtenerHora().ObtenerMI() << ":" << ticketTres.ObtenerHora().ObtenerSS() << endl << flush;
        		}        	
			}
        }
    }
            
    system("pause");

	return 0;
}
