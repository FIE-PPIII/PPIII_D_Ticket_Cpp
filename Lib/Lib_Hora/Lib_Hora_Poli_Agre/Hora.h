#ifndef __HORA_H__

	#define __HORA_H__

	#include <string>

	using namespace std;

	class Hora
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
			Hora(const int, const int, const int);

			//-------------------
			// Destructor Publico
			//-------------------

			~Hora();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarHH(const int);
			void AsignarMI(const int);
			void AsignarSS(const int);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			int ObtenerHH() const;
			int ObtenerMI() const;
			int ObtenerSS() const;

			//-----------------
			// Servicio Publico
			//-----------------

			int CompararHora(const int, const int, const int) const;
			int CompararHora(const Hora) const;
			int Validar() const;
			void Mostrar() const;
			void Mostrar(const string) const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

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

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

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

#endif
