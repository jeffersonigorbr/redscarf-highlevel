#include "systemc.h"
#include "Router.h"
#include <queue>

using namespace std;

class Channel
{
    Router source;
    Router destination;
    double width;
    queue<int> content;

public:
    Channel();
    ~Channel();

    isEmpty();
}