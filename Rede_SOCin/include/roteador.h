#include <iostream>
#include "arbitro.h"
#include "roteamento.h"
#include "controle_fluxo.h"
#include "buffer.h"
#include "flit.h"
#include "systemc.h"
#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3
#define LOCAL 4


class roteador : public sc_module
{
public:

	Flit in_data; //n+2
	Flit din; //din do buffer que é data + bop + eop
	Flit x_dout; // Saída do roteamento n+2

	sc_in < sc_uint<32> > in_val; // Entrada para o controle de fluxo
	sc_out< sc_uint<32> > in_ack; // Saída do controle de fluxo 
	sc_in < sc_uint<32> > wr; // Entrada do buffer que vem do controle de fluxo
	sc_out< sc_uint<32> > wok; // Saída do buffer que vai para o controle de fluxo

	sc_out< sc_uint<32> > x_rok; // É a variável que solicita se pode mandar para o outro roteador ao chaveamento (Arbitro)
	sc_uint<32> rd; // É a resposta que vem do arbitro 

	
	Arbitro arbitro_centralizado;

	Buffer *buffer_norte;
	Buffer *buffer_sul;
	Buffer *buffer_leste;
	Buffer *buffer_oeste;

	controle_fluxo *cf_buffer_norte;
	controle_fluxo *cf_buffer_sul;
	controle_fluxo *cf_buffer_leste;
	controle_fluxo *cf_buffer_oeste;

	Roteamento roteamento_norte;
	Roteamento roteamento_sul;
	Roteamento roteamento_leste;
	Roteamento roteamento_oeste;

	controle_fluxo *cf_saida_norte;
	controle_fluxo *cf_saida_sul;
	controle_fluxo *cf_saida_leste;
	controle_fluxo *cf_saida_oeste;


	void execute();
	void arbitragem();

	SC_CTOR(roteador) {
        SC_METHOD(execute);
        SC_METHOD(arbitragem);
        
		sensitive << in_val;
		sensitive << wr;
    }

	
};