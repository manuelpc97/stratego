#include "ficha.h"
#include "general.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

general::general(int num, int ran):ficha(num, ran){
	
}

general::~general(){

}

string general::toString()const{
	stringstream ss;
	ss << "General";
	return ss.str();
}
