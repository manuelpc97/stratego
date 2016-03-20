#include "ficha.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

ficha::ficha(int n):rango(n){

}
		
ficha::~ficha(){

}

string ficha::toString()const{
	stringstream ss;
	ss << "Ficha \n";
	return ss.str();
}		
