#include "ficha.h"
#include "minador.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

minador::minador(int num):ficha(num){
	
}

minador::~minador(){

}

string minador::toString()const{
	stringstream ss;
	ss << "Minador";
	return ss.str();
}
