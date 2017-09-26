#include "systemc.h"
#include "parameters.h"
#include "buffer.h"

using namespace std;

class Arbiter{
public:
	int ponteiro = NORTE;
	int port; // indica a que porta o arbitro está associado
	int priority; // NORTE 0, LESTE 1, SUL 2, OESTE 3

    ArbiterRoundRobin();
    ~ArbiterRoundRobin();
    void setPriority();
    int verificaPriority();
    int verificaCall();
    int verificaBuffer(buffer Buffer);

};