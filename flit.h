#include "systemc.h"
#include "parameters.h"

class flit{
	public:
		int type; //begin packet 0, instrucion 1, endpacket 2
		int payload; //aqui vai a informação do pacote
		Coordinated destiny; //recebe a coordenada de destino do flit
		
		flit();
		~flit();
}
