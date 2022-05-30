#ifndef __HORA_H__

	#define __HORA_H__
	
	#include <string>

	using namespace std;
	
	class Hora
	{
		public:
			// Constructor
			Hora();
			Hora(const int, const int, const int);
			
			// Destructor
			~Hora();
			
			// Asignar Atributo
			void AsignarHH(const int);
			void AsignarMI(const int);
			void AsignarSS(const int);
			
			// Obtener Atributo
			int ObtenerHH() const;
			int ObtenerMI() const;
			int ObtenerSS() const;
		
			// Servicio
			int CompararHora(const int, const int, const int) const;
			int CompararHora(const Hora) const;
			virtual int Validar() const;
			virtual void Mostrar() const;
			virtual void Mostrar(const string) const;
		
		private:
			int hh;
    		int mi;
    		int ss;

			// Servicio Interno
    		int ProcesarCompararHora(const int, const int, const int) const;

		protected:
	};

	// Asignar Atributo
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

	// Obtener Atributo
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
