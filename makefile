stratego: main.o mariscal.o ficha.o
	g++ main.o mariscal.o ficha.o -o stratego
main.o: main.cpp ficha.h mariscal.h
	g++ -c main.cpp
ficha.o: ficha.h ficha.cpp
	g++ -c ficha.cpp
mariscal.o: ficha.h mariscal.h mariscal.cpp
	g++ -c mariscal.cpp
 
