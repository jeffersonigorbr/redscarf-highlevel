#include "flux_control.h"
	Flux_control::Flux_control() {

	}

	Flux_control::~Flux_control() {

	}


	sc_out<sc_logic>  Flux_control::bufferisEmpty() {
		if (buffer.isEmpty() == 1)
		{
			requisicao_out.write(SC_LOGIC_1);
			
		} else {
			requisicao_out.write(SC_LOGIC_0);
		} 
		wait();
		return requisicao_out;
	}
