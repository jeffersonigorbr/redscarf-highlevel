#ifndef _BUFFER_H_
#define _BUFFER_H_ 

#include <iostream>
#include <queue>
#include "flit.h"
#include "controle_fluxo.h"

class Buffer
{
public:
	Controle_fluxo *controle_fluxo;
	
	std::queue<Flit> flits;

	int din; //Entrada data + bop + eop
	int dout; //Saída que vai para o roteamento

	int wr; //Entrada que vem do controle de fluxo
	int wok; //Saída que volta para o buffer

	int rok; //Saída ?
	int rd; //Entrada que vem do chaveamento
	
	Buffer();
	~Buffer();
	void add(Flit);
	void remove();
	int isEmpty();

	
};
#endif