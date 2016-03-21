#include "ficha.h"
#include "mariscal.h"
#include "general.h"
#include "coronel.h"
#include "comandante.h"
#include "capitan.h"
#include "teniente.h"
#include "explorador.h"
#include "minador.h"
#include "sargento.h"
#include "bomba.h"
#include "bandera.h"
#include "espia.h"
#include <typeinfo>
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(int argc, char*argv[]){
	ficha** prin = new ficha*[2];

	mariscal a(1);
	bandera p(2);
	prin[0] = &a;
	prin[1] = &p;
	cout << prin[0]->toString() << " " << prin[0]->getRango()<< endl;
	cout << prin[1]->toString() << " "<< prin[1] -> getRango() << endl;
	return 0;
}
