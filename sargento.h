#pragma once
#include "ficha.h"
#include <string>

using std::string;

class sargento:public ficha{
	public:
		sargento(int = 4);
		~sargento();
		virtual string toString()const;

};
