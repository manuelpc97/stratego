#include "ficha.h"
#include "mariscal.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

mariscal::mariscal(int num):ficha(num){
	
}

mariscal::~mariscal(){

}

string mariscal::toString()const{
	stringstream ss;
	ss << "Mariscal";
	return ss.str();
}
