#pragma once
#include "ficha.h"
#include <string>

using std::string;

class general:public ficha{
	public:
		general(int = 9);
		~general();
		virtual string toString()const;

};
