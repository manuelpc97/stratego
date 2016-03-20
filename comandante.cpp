#include "ficha.h"
#include "comandante.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

comandante::comandante(int num, int ran):ficha(num, ran){
	
}

comandante::~comandante(){

}

string comandante::toString()const{
	stringstream ss;
	ss << "Comandante";
	return ss.str();
}
