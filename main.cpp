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

ficha*** createBoard();
void initializeBoard(ficha***);
void destroyBoard(ficha***);

int main(int argc, char*argv[]){
	ficha*** board = createBoard();
	initializeBoard(board);
		
	destroyBoard(board);
	return 0;
}

ficha*** createBoard(){
	ficha*** retorno = new ficha**[10];

	for(int i = 0; i < 10; i++){
		retorno[i] = new ficha*[10];
	}
}

void initializeBoard(ficha*** board){
	for(int i = 0; i < 10; i++){
		for(int k = 0; k < 9; k++){
			board[i][k] = NULL;
		}
	}
}

void destroyBoard(ficha*** board){
	for(int i = 0; i < 10; i++){
		delete[] board;
	}
	
	delete[] board;
}
