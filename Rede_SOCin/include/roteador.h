#include <iostream>
#include "arbitro.h"
#include "roteamento.h"
#include "controle_fluxo.h"
#include "buffer.h"
#include "flit.h"
#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3
#define LOCAL 4


class Roteador
{
public:

	Flit in_data; //n+2
	int din; //din do buffer que é data + bop + eop
	int x_dout; // Saída do roteamento n+2


	//Precisa? Não sei ainda...
	//cinco canais de entrada
	int lin;
	int nin;
	int ein;
	int sin;
	int win;
	//cinco canais de saída
	int lout;
	int nout;
	int eout;
	int sout;
	int wout;

	int in_val; // Entrada para o controle de fluxo
	int in_ack; // Saída do controle de fluxo 
	int wr; // Entrada do buffer que vem do controle de fluxo
	int wok; // Saída do buffer que vai para o controle de fluxo


	int x_rok; // É a variável que solicita se pode mandar para o outro roteador ao chaveamento (Arbitro)
	int rd; // É a resposta que vem do arbitro 


	Arbitro *arbitro;
	Roteamento roteamento;
	Buffer *buffer;
	Controle_fluxo *controle_fluxo;

	Roteador();
	~Roteador();
	void execute();
	void arbitragem();
	
};