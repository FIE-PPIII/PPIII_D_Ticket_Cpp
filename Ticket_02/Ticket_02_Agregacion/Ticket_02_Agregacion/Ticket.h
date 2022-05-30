#ifndef __TICKET_H__

	#define __TICKET_H__

	#include <string>
	
	#include "../../../Lib/Lib_Fecha/Lib_Fecha_Agregacion/Fecha.h"
	
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

			// Servicio
			int ValidarDatos();
			void MostrarDatos();
			void MostrarDatos(const string);

		private:
			string datos;
			string nro;
			Fecha fecha;
			
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

#endif
