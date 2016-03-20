#include "ficha.h"
#include "espia.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

espia::espia(int num):ficha(num){
	
}

espia::~espia(){

}

string espia::toString()const{
	stringstream ss;
	ss << "Espia";
	return ss.str();
}
