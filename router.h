#include "systemc.h"
#include "buffer.h"

#include <vector>

using namespace std;

class Router
{
    vector <buffer> buffers;
    vector <Arbiter> arbiters;
public:
    Router();
    ~Router();

    void execute();
    void arbitration();
}