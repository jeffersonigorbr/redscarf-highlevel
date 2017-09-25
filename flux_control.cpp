#include "flux_control.h"
	Flux_control::Flux_control() {

	}

	Flux_control::~Flux_control() {

	}
	void Flux_control::requisicao (sc_in<sc_int<32>> req) {
		if (req == 1)
		{
			this.in_ack.write(bufferisEmpty());
			wait();
		}
	}



	sc_out<sc_int<32>>  Flux_control::bufferisEmpty() {
		if (buffer.isEmpty() == 1)
		{
			this.wok.write(1); // Se estiver vazio escreve 1
			
		} else {
			this.wok.write(0); // Senão, escreve 0
		} 
		wait();
		return wok;
	}
