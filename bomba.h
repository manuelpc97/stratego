#pragma once
#include "ficha.h"
#include <string>

using std::string;

class bomba:public ficha{
	public:
		bomba(int,int = 0);
		~bomba();
		virtual string toString()const;

};
