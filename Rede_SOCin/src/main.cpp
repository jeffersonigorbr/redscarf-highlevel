#include <iostream>
#include <vector>
#include "systemc.h"
#include "pacote.h"
#include "buffer.h"
#include "flit.h"
#include "roteamento.h"
#include "roteador.h"

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<std::vector<Roteador> >  rede(2, vector<Roteador>(2)); // Matriz A
	//Criando uma rede 2x2
	Roteador *roteador1 = new Roteador();
	Roteador *roteador2 = new Roteador();
	Roteador *roteador3 = new Roteador();
	Roteador *roteador4 = new Roteador();
	rede[0][0] = *roteador1;
	rede[0][1] = *roteador2;
	rede[1][0] = *roteador3;
	rede[1][1] = *roteador4;
	
	return 0;
}