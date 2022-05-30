#ifndef __TICKET_H__

	#define __TICKET_H__

	#include <string>
	
	#include "../../../Lib/Lib_Fecha/Lib_Fecha_Generalizacion/Fecha.h"
	
	using namespace std;

	class Ticket : public Fecha
	{
		public:
			// Constructor
			Ticket();
			Ticket(const string);
			
			// Destructor
			virtual ~Ticket();

			// Asignar Atributo
			void AsignarDatos(const string);

			// Obtener Atributo
			string ObtenerDatos() const;
			string ObtenerNro() const;
			Fecha * ObtenerFecha();

			// Servicio
			int ValidarDatos();
			void MostrarDatos();
			void MostrarDatos(const string);

		private:
			string datos;
			string nro;
			
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
	
	inline Fecha * Ticket::ObtenerFecha()
	{
		return (Fecha *) this;
	}

#endif
