#ifndef __TICKET_H__

	#define __TICKET_H__

	#include <string>

	#include "../../../Lib/Lib_Fecha/Lib_Fecha_Generalizacion/Fecha.h"

	using namespace std;

	class Ticket : public Fecha
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

			virtual ~Ticket();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarDatos(const string);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			string ObtenerDatos() const;
			string ObtenerNro() const;
			Fecha * ObtenerFecha();

			//-----------------
			// Servicio Publico
			//-----------------

			int ValidarDatos();
			void MostrarDatos();
			void MostrarDatos(const string);
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

	inline Fecha * Ticket::ObtenerFecha()
	{
		return (Fecha *) this;
	}

#endif
