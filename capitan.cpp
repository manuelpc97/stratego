#include "ficha.h"
#include "capitan.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

capitan::capitan(int num):ficha(num){
	
}

capitan::~capitan(){

}

string capitan::toString()const{
	stringstream ss;
	ss << "Capitan";
	return ss.str();
}
