#ifndef FLUX_CONTROL_H
#define FLUX_CONTROL_H
#include "buffer.h"
#include "systemc.h"
#include "packet.h"

class Flux_control
{
public:
	sc_int capacity; // Capacidade do buffer
	sc_in<sc_logic> requisicao_in; //recebe uma requisição para saber se tem espaço no buffer
	sc_out<sc_logic> requisicao_out; //retorna uma requisição para saber se tem espaço no buffer
	
	sc_out<packet> porta_saida_buffer;

	Buffer buffer; // Buffer do controlador de fluxo
	Flux_control(); // Construtor
	~Flux_control(); // Destrutor

	sc_out<sc_logic> bufferisEmpty(); // Verifica se o buffer está vazio

	// Falta alocar os canais...
	// Falta um método pra enviar o dado para o buffer..


	
};

#endif
