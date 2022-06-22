#ifndef __TICKET_H__

	#define __TICKET_H__

	#include <string>

	using namespace std;

	class Ticket
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			string datos;
			string nro;

			//-----------------
			// Servicio Privado
			//-----------------

			void ParsearDatos();

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			Ticket();
			Ticket(const string);

			//-------------------
			// Destructor Publico
			//-------------------

			~Ticket();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarDatos(const string);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			string ObtenerDatos() const;
			string ObtenerNro() const;

			//-----------------
			// Servicio Publico
			//-----------------

			void MostrarDatos() const;
			void MostrarDatos(const string) const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void Ticket::AsignarDatos(const string datos)
	{
		this->datos = datos;
		
		this->ParsearDatos();
	
		return;
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline string Ticket::ObtenerDatos() const
	{
		return(this->datos);
	}

	inline string Ticket::ObtenerNro() const
	{
		return(this->nro);
	}

#endif
