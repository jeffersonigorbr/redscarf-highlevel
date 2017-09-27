#include "systemc.h"
#include "parameters.h"

using namespace std;

SC_MODULE(routing){
	sc_in <Coordinated> posicion;
	sc_in <Coordinated> destiny;
	sc_out <sc_int<32> > portDestiny;

    void routing_xy();
    SC_CTOR(routing){
		SC_METHOD(routing_xy);
		sensitive << posicion;
		sensitive << destiny;
	}
    
}
