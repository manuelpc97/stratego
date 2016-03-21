#pragma once
#include <string>

using std::string;

class ficha{
	protected:
		int rango;
		int jugador;
	public:
		ficha(int = 0, int = 0);
		~ficha();
		virtual string toString()const;
		virtual int getRango()const;		
};
