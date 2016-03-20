#include "ficha.h"
#include "coronel.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

coronel::coronel(int num , int ran):ficha(num, ran){
	
}

coronel::~coronel(){

}

string coronel::toString()const{
	stringstream ss;
	ss << "Coronel";
	return ss.str();
}
