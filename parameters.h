#ifndef PARAMETERS_H_INCLUDED
#define PARAMETERS_H_INCLUDED

#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3
#define LOCAL 4

#define FREE 0
#define SENDING 1
#define WAITING 1

#define ERROR 5

#define BEGIN_PACKET 0
#define INSTRUCION 1
#define END_PACKET 2
#define SIZE_FLIT_PACKET 50

struct Coordinated{

int x;
int y;

};

#endif 
