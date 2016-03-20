#include "ficha.h"
#include "sargento.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

sargento::sargento(int num, int ran):ficha(num, ran){
	
}

sargento::~sargento(){

}

string sargento::toString()const{
	stringstream ss;
	ss << "Sargento";
	return ss.str();
}
