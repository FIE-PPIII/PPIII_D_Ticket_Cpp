#ifndef __HORA_H__

	#define __HORA_H__

	#include <string>

	#include "Fecha.h"

	using namespace std;

	class Hora : public Fecha
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			int hh;
    		int mi;
    		int ss;

			//-----------------
			// Servicio Privado
			//-----------------

    		int ProcesarCompararHora(const int, const int, const int) const;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			Hora();
			Hora(const int, const int, const int, const int, const int, const int);

			//-------------------	
			// Destructor Publico
			//-------------------

			virtual ~Hora();

			//-----------------
			// Asignar Atributo
			//-----------------

			void AsignarHH(const int);
			void AsignarMI(const int);
			void AsignarSS(const int);

			//----------------- 
			// Obtener Atributo
			//-----------------

			int ObtenerHH() const;
			int ObtenerMI() const;
			int ObtenerSS() const;
			Fecha & ObtenerFecha();

			//-----------------
			// Servicio Publico
			//-----------------

			int CompararHora(const int, const int, const int) const;
			int CompararHora(const Hora) const;
			virtual int Validar();
			virtual void Mostrar();
			virtual void Mostrar(const string);
	};

	//-----------------
	// Asignar Atributo
	//-----------------

	inline void Hora::AsignarHH(const int hh) 
	{
		this->hh = hh;
	}

	inline void Hora::AsignarMI(const int mi)
	{
		this->mi = mi;
	}

	inline void Hora::AsignarSS(const int ss)
	{
		this->ss = ss;
	}

	//-----------------
	// Obtener Atributo
	//-----------------

	inline int Hora::ObtenerHH() const
	{
    	return this->hh;
	}

	inline int Hora::ObtenerMI() const
	{
    	return this->mi;
	}

	inline int Hora::ObtenerSS() const
	{
		return this->ss;
	}

	inline Fecha & Hora::ObtenerFecha()
	{
		Fecha * fecha = (Fecha *) this;
	
		return(*fecha);
	}

#endif
