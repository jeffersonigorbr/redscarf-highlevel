#include "systemc.h"

using namespace std;

class Arbiter
{
    sc_in<string> in;
    sc_out<string> out;
public:
    ArbiterRoundRobin();
    ~ArbiterRoundRobin();

}