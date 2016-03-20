#include "ficha.h"
#include "explorador.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

explorador::explorador(int num):ficha(num){
	
}

explorador::~explorador(){

}

string explorador::toString()const{
	stringstream ss;
	ss << "Explorador";
	return ss.str();
}
