stratego: main.o mariscal.o ficha.o general.o
	g++ main.o mariscal.o ficha.o general.o -o stratego
main.o: main.cpp ficha.h mariscal.h
	g++ -c main.cpp
ficha.o: ficha.h ficha.cpp
	g++ -c ficha.cpp
mariscal.o: ficha.h mariscal.h mariscal.cpp
	g++ -c mariscal.cpp
general.o: ficha.h general.h general.cpp
	g++ -c general.cpp
 
