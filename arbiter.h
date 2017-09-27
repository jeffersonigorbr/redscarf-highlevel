#include "systemc.h"
#include "parameters.h"
#include "buffer.h"

using namespace std;

SC_MODULE(Arbiter){
	sc_in <Buffer> bufferN;
	sc_in <Buffer> bufferE;
	sc_in <Buffer> bufferS;
	sc_in <Buffer> bufferW;

	int buffercircular[5];//Podendo ser 0 ou 1
	//Aqui o que está faltando é por esse portDestino ligado ao buffer circular do arbitro...
	sc_in <sc_int<32> > portDestiny; //liga na portDestiny do roteamento
	sc_out <sc_int<32> > work;
	sc_out <sc_int<32> > priority;
	sc_int<32> > pointer = NORTH; // NORTH 0, EAST 1, SOUTH 2, WEST 3

    void setPriority(Buffer); // Ver se dá pra dar um read no sc_in...
    void checkPriority();
    void checkAvailiability();

    SC_CTOR(Arbiter){
		SC_METHOD(setPriority);
		sensitive << pointer;

		SC_METHOD(checkAvailiability);
		sensitive << portDestiny;
	}
    
};