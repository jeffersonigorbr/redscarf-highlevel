#ifndef _BUFFER_H_
#define _BUFFER_H_ 

#include <iostream>
#include <queue>
#include "flit.h"
#include "controle_fluxo.h"
#include "systemc.h"

class Buffer : public sc_module
{
public:
	
	
	std::queue<Flit> flits;

	Flit din; //Entrada data + bop + eop
	Flit dout; //Saída que vai para o roteamento

	sc_in < sc_uint<32> > wr; //Entrada que vem do controle de fluxo
	sc_out< sc_uint<32> > wok; //Saída que volta para o buffer
	sc_in < sc_uint<32> > rd; //Entrada que vem do chaveamento
	sc_out<sc_int<32> > rok; //Saída ?
	
	sc_int<32> length;

	Buffer();
	~Buffer();
	void add();
	void remove();
	int isEmpty();

	SC_CTOR(Buffer) {
        SC_METHOD(add);
        SC_METHOD(remove);
        sensitive << wr << rd;
    }

	
};
#endif