#include "ficha.h"
#include "bomba.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

bomba::bomba(int num):ficha(num){
	
}

bomba::~bomba(){

}

string bomba::toString()const{
	stringstream ss;
	ss << "Bomba";
	return ss.str();
}
