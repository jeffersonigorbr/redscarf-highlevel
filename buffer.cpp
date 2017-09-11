#include "buffer.h"

buffer::buffer(sc_int capacidade){
	this->length = capacidade;
}

buffer::estaVazio(){
	if (this->posicoes.size() == 0){
		return 1;
	} else {
		return 0;
	}
}

buffer::add(sc_int valor){
	if (this->posicoes >= this->length){
		wait(read_event);
		return -1; // pilha virtualmente cheia
	} else {
		this->posicoes.push(valor);
		write_event.notify();
	}

buffer::remove(){
	if (this->posicoes < 1){
		wait(write_event);
		return 0; // erro devido a fila vazia
	} else {
		read_event.notify();
		return (this->posicoes.pop());
	}
}	

buffer::estaCheio(){
	if (this->posicoes.size == this->length){
		return 1;
	} else {
		return 0;
		}
}
	
		
	
