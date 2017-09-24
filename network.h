#include "systemc.h"
#include "router.h"

#include <vector>

using namespace std;

class Network
{
    vector <Router> routers;
    vector <Channel> chennels;
public:
    Network();
    ~Network();
}