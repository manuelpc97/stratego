#include "ficha.h"
#include "teniente.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

teniente::teniente(int num):ficha(num){
	
}

teniente::~teniente(){

}

string teniente::toString()const{
	stringstream ss;
	ss << "Teniente";
	return ss.str();
}
