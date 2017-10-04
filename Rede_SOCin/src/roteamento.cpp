#include "roteamento.h"

Roteamento::Roteamento()
{
	this->in_data = new Flit();
}

Roteamento::~Roteamento()
{
	
}


void Roteamento::rotear_xy()
{
	if (cordenada_destino.y > cordenada.y)
	{
		portaDestino = EAST;
	} else if (cordenada_destino.y < cordenada.y)
	{
		portaDestino = WEST;
	} else if (cordenada_destino.x > cordenada.x)
	{
		portaDestino = SOUTH;
	} else if (cordenada_destino.x < cordenada.x)
	{
		portaDestino = NORTH;
	} else {
		portaDestino = LOCAL;
	}
}
