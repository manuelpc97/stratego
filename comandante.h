#pragma once
#include "ficha.h"
#include <string>

using std::string;

class comandante:public ficha{
	public:
		comandante(int,int = 7);
		~comandante();
		virtual string toString()const;

};
