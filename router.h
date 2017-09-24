#include "systemc.h"
#include "buffer.h"
#include "parameters.h"

#include <vector>

using namespace std;

class Router
{
    vector <buffer> buffers;
    vector <Arbiter> arbiters;
    Coordenada posicao;
public:
    Router();
    ~Router();

    void execute();
    void arbitration();
}