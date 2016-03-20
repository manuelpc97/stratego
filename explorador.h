#pragma once
#include "ficha.h"
#include <string>

using std::string;

class explorador:public ficha{
	public:
		explorador(int,int = 2);
		~explorador();
		virtual string toString()const;

};
