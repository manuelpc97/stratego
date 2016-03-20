#include "ficha.h"
#include "coronel.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

coronel::coronel(int num):ficha(num){
	
}

coronel::~coronel(){

}

string coronel::toString()const{
	stringstream ss;
	ss << "Coronel";
	return ss.str();
}
