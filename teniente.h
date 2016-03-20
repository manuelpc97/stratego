#pragma once
#include "ficha.h"
#include <string>

using std::string;

class teniente:public ficha{
	public:
		teniente(int = 5);
		~teniente();
		virtual string toString()const;

};
