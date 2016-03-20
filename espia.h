#pragma once
#include "ficha.h"
#include <string>

using std::string;

class espia:public ficha{
	public:
		espia(int = 1);
		~espia();
		virtual string toString()const;

};
