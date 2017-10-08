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

//***************************************************************************************************
	//Criando um pacote com um flit que quer ir para o roteador na posicao (1,1)
	Pacote pct;
	pct.flit[0].cabeca = 1;
	pct.flit[0].terminador = -1;
	pct.flit[0].payload = 2;
	//Cordenadas para qual o flit deve ir
	pct.flit[0].cordenadas_f.x = 1;
	pct.flit[0].cordenadas_f.y = 1;
//***************************************************************************************************



//***************************************************************************************************
	//Criando uma rede 2x2
	std::vector<std::vector<Roteador> >  rede(2, vector<Roteador>(2)); // Matriz de roteadores... 2x2
	//Criando os roteadores
	Roteador roteador1;
	Roteador roteador2;
	Roteador roteador3;
	Roteador roteador4;
	//Atribuindo os roteadores à rede 2x2
	rede[0][0] = roteador1;
	rede[0][1] = roteador2;
	rede[1][0] = roteador3;
	rede[1][1] = roteador4;
//***************************************************************************************************
// SIMULAÇÃO...
//***************************************************************************************************

// Roteador 1
rede[0][0].in_data = pct.flit[0];
rede[0][0].roteamento.cordenada.x = 0;
rede[0][0].roteamento.cordenada.y = 0;

rede[0][0].roteamento.cordenada_destino.x = pct.flit[0].cordenadas_f.x;
rede[0][0].roteamento.cordenada_destino.y = pct.flit[0].cordenadas_f.y;

// Roteador 2

rede[0][1].roteamento.cordenada.x = 0;
rede[0][1].roteamento.cordenada.y = 1;

// Roteador 3

rede[1][0].roteamento.cordenada.x = 1;
rede[1][0].roteamento.cordenada.y = 0;

// Roteador 4

rede[1][1].roteamento.cordenada.x = 1;
rede[1][1].roteamento.cordenada.y = 1;

int x = 0;
int y = 0;



// Seta o controle de fluxo... Que passa pelo buffer 
// Aí tem uma flag que se tá vazio passa o in_data
// Esse in_data vai para o roteamento que destina a porta e tal... Aí se tá vazio passa para o próximo roteador


//rede[0][0].roteamento.rotear_xy();

//std::cout << rede[0][0].roteamento.portaDestino;
int i = 0;
while (i < 2){

rede[x][y].roteamento.rotear_xy();

if (rede[x][y].roteamento.portaDestino == NORTH)
{
	x--;
} else if (rede[x][y].roteamento.portaDestino == SOUTH)
{
	x++;
} else if (rede[x][y].roteamento.portaDestino == EAST) 
{
	y++;
} else if (rede[x][y].roteamento.portaDestino == WEST)
{
	y--;
}

rede[x][y].in_val = 1;

if (rede[x][y].in_val == 1) {

	rede[x][y].execute();

	if (rede[x][y].in_ack == 1)
	{
		rede[x][y].in_data = pct.flit[0]; // PEGAR DO ROTEADOR ANTERIOR
		rede[x][y].buffer->add(rede[x][y].in_data);
	}
}

rede[x][y].roteamento.cordenada_destino.x = pct.flit[0].cordenadas_f.x;
rede[x][y].roteamento.cordenada_destino.y = pct.flit[0].cordenadas_f.y;




std::cout <<"buffer" << rede[x][y].buffer->isEmpty() << std::endl;

i++;
}



std::cout <<"payload no rotador destino" << rede[x][y].buffer->flits.back().payload << std::endl;


std::cout << x;
std::cout << y;
	
	return 0;
}