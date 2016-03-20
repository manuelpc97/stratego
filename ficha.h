#pragma once
#include <string>

using std::string;

class ficha{
	protected:
		int rango;
	public:
		ficha(int);
		~ficha();
		virtual string toString()const;		
};
