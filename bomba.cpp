#include "ficha.h"
#include "bomba.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

bomba::bomba(int num, int ran):ficha(num, ran){
	
}

bomba::~bomba(){

}

string bomba::toString()const{
	stringstream ss;
	ss << "Bomba";
	return ss.str();
}
