#pragma once
#include "ficha.h"
#include <string>

using std::string;

class bandera:public ficha{
	public:
		bandera(int, int = 0);
		~bandera();
		virtual string toString()const;

};
