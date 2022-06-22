#ifndef __FECHA_H__

	#define __FECHA_H__

	#include <string>

	using namespace std;

	class Fecha
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			int dd;
    		int mm;
    		int aaaa;

			//-----------------
			// Servicio Privado
			//-----------------

    		int ProcesarCompararFecha(const int, const int, const int) const;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			Fecha();
			Fecha(const int, const int, const int);

			//-------------------
			// Destructor Publico
			//-------------------

			virtual ~Fecha();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarDD(const int);
			void AsignarMM(const int);
			void AsignarAAAA(const int);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			int ObtenerDD() const;
			int ObtenerMM() const;
			int ObtenerAAAA() const;

			//-----------------
			// Servicio Publico
			//-----------------

			int CompararFecha(const int, const int, const int) const;
			int CompararFecha(const Fecha) const;
			int ValidarFecha() const;
			void MostrarFecha() const;
			void MostrarFecha(const string) const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void Fecha::AsignarDD(const int dd) 
	{
		this->dd = dd;
	}

	inline void Fecha::AsignarMM(const int mm)
	{
		this->mm = mm;
	}

	inline void Fecha::AsignarAAAA(const int aaaa)
	{
		this->aaaa = aaaa; 
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline int Fecha::ObtenerDD() const
	{
    	return this->dd; 
	}

	inline int Fecha::ObtenerMM() const
	{
    	return this->mm;
	}

	inline int Fecha::ObtenerAAAA() const
	{
		return this->aaaa; 
	}

#endif
