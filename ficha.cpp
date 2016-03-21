#include "ficha.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

ficha::ficha(int n, int j):rango(j), jugador(n){

}
		
ficha::~ficha(){

}

string ficha::toString()const{
	stringstream ss;
	ss << "Ficha \n";
	return ss.str();
}	

int ficha::getRango()const{
	return rango;
}	
