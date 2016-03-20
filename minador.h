#pragma once
#include "ficha.h"
#include <string>

using std::string;

class minador:public ficha{
	public:
		minador(int,int = 3);
		~minador();
		virtual string toString()const;

};
