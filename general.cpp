#include "ficha.h"
#include "general.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

general::general(int num):ficha(num){
	
}

general::~general(){

}

string general::toString()const{
	stringstream ss;
	ss << "General";
	return ss.str();
}
