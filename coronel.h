#pragma once
#include "ficha.h"
#include <string>

using std::string;

class coronel:public ficha{
	public:
		coronel(int, int = 8);
		~coronel();
		virtual string toString()const;

};
