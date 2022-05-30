#ifndef __TICKET_H__

	#define __TICKET_H__

	#include <string>

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

			// Servicio
			void MostrarDatos() const;
			void MostrarDatos(const string) const;

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

#endif
