#include <routing.h>

void routing::routing_xy(){
	if(destiny.y.read() > posicion.y.read()){
			portDestiny.write(EAST);
	}else if(destiny.y.read() < posicion.y.read()){
			portDestiny.write(WEST);
	}
	else if(destiny.x.read() > posicion.x.read()){
			portDestiny.write(SOUTH);
	}
	else if(destiny.x.read() < posicion.x.read()){
			portDestiny.write(NORTH);
	}
	else{
			portDestiny.write(LOCAL);
    }
}
