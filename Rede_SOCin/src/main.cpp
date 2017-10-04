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

	//Criando um pacote com um flit que quer ir para o roteador na posicao (1,1)
	Pacote *pct = new Pacote();
	pct->flit[0]->cabeca = 1;
	pct->flit[0]->terminador = -1;
	pct->flit[0]->payload = 2;
	pct->flit[0]->cordenadas_f.x = 1;
	pct->flit[0]->cordenadas_f.y = 1;


	std::vector<std::vector<Roteador> >  rede(2, vector<Roteador>(2)); // Matriz A
	//Criando uma rede 2x2
	Roteador roteador1;
	Roteador roteador2;
	Roteador roteador3;
	Roteador roteador4;
	rede[0][0] = roteador1;
	rede[0][1] = roteador2;
	rede[1][0] = roteador3;
	rede[1][1] = roteador4;
	//Setando as cordenadas de cada roteador... Tem como fazer isso dinamicamente, mas dá um trabalhinho... Wait...
	roteador1.roteamento->cordenada.x = 0;
	roteador1.roteamento->cordenada.y = 0;
	
	roteador2.roteamento->cordenada.x = 0;
	roteador2.roteamento->cordenada.y = 1;
	
	roteador3.roteamento->cordenada.x = 1;
	roteador3.roteamento->cordenada.y = 0;
	
	roteador4.roteamento->cordenada.x = 1;
	roteador4.roteamento->cordenada.y = 1;
	
	return 0;
}