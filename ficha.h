#pragma once
#include <string>

using std::string;

class ficha{
	protected:
		int rango;
		int jugador;
	public:
		ficha(int, int);
		~ficha();
		virtual string toString()const;		
};
