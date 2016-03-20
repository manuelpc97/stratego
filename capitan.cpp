#include "ficha.h"
#include "capitan.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

capitan::capitan(int num, int ran):ficha(num, ran){
	
}

capitan::~capitan(){

}

string capitan::toString()const{
	stringstream ss;
	ss << "Capitan";
	return ss.str();
}
