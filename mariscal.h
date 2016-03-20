#pragma once
#include "ficha.h"
#include <string>

using std::string;

class mariscal:public ficha{
	public:
		mariscal(int,int = 10);
		~mariscal();
		virtual string toString()const;

};
