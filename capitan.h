#pragma once
#include "ficha.h"
#include <string>

using std::string;

class capitan:public ficha{
	public:
		capitan(int = 6);
		~capitan();
		virtual string toString()const;

};
