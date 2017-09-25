#ifndef FLUX_CONTROL_H
#define FLUX_CONTROL_H
#include "buffer.h"
#include "systemc.h"
#include "packet.h"

class Flux_control
{
public:
	sc_int<32> capacity; // Capacidade do buffer

	sc_in<sc_int<32>> in_val; //recebe uma requisição para saber se tem espaço no buffer
	sc_out<sc_int<32>> wr;//retorna uma requisição para saber se tem espaço no buffer
	
	sc_in<sc_int<32>> wok; // Recebe do buffer o retorno da requisição
	sc_out<sc_int<32>> in_ack; // Retorna para o resultado requisitado...
	//se in_ack for 1 pode escrever no buffer

	Buffer buffer = new Buffer(capacity); // Buffer do controlador de fluxo

	Flux_control(); // Construtor
	~Flux_control(); // Destrutor

	sc_out<sc_int<32>> bufferisEmpty(); // Verifica se o buffer está vazio
	void requisicao (sc_in<sc_int<32>>);
	// Falta alocar os canais...
	// Falta um método pra enviar o dado para o buffer..

	
};

#endif


