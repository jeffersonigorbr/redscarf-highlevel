#include "buffer.h"

buffer::buffer(int capacidade){
	this->length = capacidade;
}

buffer::estaVazio(){
	if (this->posicoes.size() == 0){
		return true;
	} else {
		return false;
	}
}

buffer::add(int valor){
	if (this->posicoes >= this->length){
		return -1; // pilha virtualmente cheia
	} else {
		this->posicoes.push(valor);
	}

buffer::remove(){
	if (this->posicoes < 1){
		return false; // erro devido a fila vazia
	} else {
		this->posicoes.pop();
		return true;
	}
}	
	
		
	
