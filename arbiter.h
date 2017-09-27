#include "systemc.h"
#include "parameters.h"
#include "buffer.h"

using namespace std;

SC_MODULE(Arbiter){
	sc_in <buffer> bufferN;
	sc_in <buffer > bufferE;
	sc_in <buffer> > bufferS;
	sc_in <buffer> > bufferW;
	sc_in <buffer> > portDestiny;
	sc_out <sc_int<32> > work;
	sc_int<32> > pointer = NORTH; // NORTH 0, EAST 1, SOUTH 2, WEST 3

    ArbiterRoundRobin();
    ~ArbiterRoundRobin();
    void setPriority();
    int checkPriority();
    sc_int<32> checkAvailiability();

};