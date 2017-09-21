#include "systemc.h"
#include "parameters.h"

using namespace std;

class Routing{

	Coordenada destino;
	Coordenada posicao;

public:
    Routing();
    ~Routing();
    routing_xy(Coordenada posicao, Coordenada destino);
}