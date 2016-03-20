#include "ficha.h"
#include "bandera.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

bandera::bandera(int num):ficha(num){
	
}

bandera::~bandera(){

}

string bandera::toString()const{
	stringstream ss;
	ss << "Bandera";
	return ss.str();
}
