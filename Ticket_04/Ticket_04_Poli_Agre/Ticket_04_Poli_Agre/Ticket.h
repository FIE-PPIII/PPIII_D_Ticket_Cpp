
#ifndef __TICKET_H__

	#define __TICKET_H__

	#include <string>
	
	#include "../../../Lib/Lib_Fecha/Lib_Fecha_Polimorfismo/Fecha.h"
	#include "../../../Lib/Lib_Hora/Lib_Hora_Poli_Agre/Hora.h"

	using namespace std;

	class Ticket
	{
		public:
			// Constructor
			Ticket();
			Ticket(const string);
			
			// Destructor
			~Ticket();

			// Asignar Atributo
			void AsignarDatos(const string);

			// Obtener Atributo
			string ObtenerDatos() const;
			string ObtenerNro() const;
			Fecha & ObtenerFecha();
			Hora & ObtenerHora();

			// Servicio
			virtual int Validar();
			virtual void Mostrar();
			virtual void Mostrar(const string);

		private:
			string datos;
			string nro;
			Fecha fecha;
			Hora hora;
			
			// Servicio Interno
			void ParsearDatos();
	};

	// Asignar Atributo
	inline void Ticket::AsignarDatos(const string datos)
	{
		this->datos = datos;
		
		this->ParsearDatos();
	
		return;
	}

	// Obtener Atributo
	inline string Ticket::ObtenerDatos() const
	{
		return(this->datos);
	}
	
	inline string Ticket::ObtenerNro() const
	{
		return(this->nro);
	}
	
	inline Fecha & Ticket::ObtenerFecha()
	{
		return(this->fecha);
	}
	
	inline Hora & Ticket::ObtenerHora()
	{
		return(this->hora);
	}

#endif
