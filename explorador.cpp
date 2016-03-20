#include "ficha.h"
#include "explorador.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

explorador::explorador(int num, int ran):ficha(num,ran){
	
}

explorador::~explorador(){

}

string explorador::toString()const{
	stringstream ss;
	ss << "Explorador";
	return ss.str();
}
