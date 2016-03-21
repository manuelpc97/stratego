stratego: main.o mariscal.o ficha.o general.o coronel.o comandante.o capitan.o teniente.o sargento.o minador.o explorador.o espia.o bomba.o bandera.o
	g++ main.o mariscal.o ficha.o general.o coronel.o comandante.o capitan.o teniente.o sargento.o minador.o explorador.o espia.o bomba.o bandera.o -o stratego
main.o: main.cpp ficha.h mariscal.h
	g++ -c main.cpp
ficha.o: ficha.h ficha.cpp
	g++ -c ficha.cpp
mariscal.o: ficha.h mariscal.h mariscal.cpp
	g++ -c mariscal.cpp
general.o: ficha.h general.h general.cpp
	g++ -c general.cpp
coronel.o: ficha.h coronel.h coronel.cpp
	g++ -c coronel.cpp
comandante.o: ficha.h comandante.h comandante.cpp
	g++ -c comandante.cpp
capitan.o: ficha.h capitan.h capitan.cpp
	g++ -c capitan.cpp
teniente.o: ficha.h teniente.h teniente.cpp
	g++ -c teniente.cpp
sargento.o: ficha.h sargento.h sargento.cpp
	g++ -c sargento.cpp
minador.o: ficha.h minador.h minador.cpp
	g++ -c minador.cpp
explorador.o: ficha.h explorador.h explorador.cpp
	g++ -c explorador.cpp
espia.o: ficha.h espia.h espia.cpp
	g++ -c espia.cpp
bomba.o: ficha.h bomba.h bomba.cpp
	g++ -c bomba.cpp
bandera.o: ficha.h bandera.h bandera.cpp
	g++ -c bandera.cpp

