#include "systemc.h"
#include "parameters.h"

class flit{
public:
	int type; //cabeçalho 0, instrução 1, terminador 2
	flit();
	~flit();
}