#include <routing.h>

Routing::Routing()
{

}

Routing::~Routing()
{

}

int routing::routing_xy(Coordenada posicao, Coordenada destino){
	if(destino.y > posicao.y){
			return LESTE;
		}
		else if(destino.y < posicao.y){
			return OESTE;
		}
		else if(destino.x > posicao.x){
			return SUL;
		}
		else if(destino.x < posicao.x){
			return NORTE;
		}
		else{
			return CHEGADA;
        }
}