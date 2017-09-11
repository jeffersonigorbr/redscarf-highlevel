#include "buffer.h"

Buffer::Buffer(int capacidade){
	this->length = capacidade;
}

Buffer::estaVazio(){
	if (this->posicoes.size() == 0){
		return true;
	} else {
		return false;
	}
}

Buffer::add(int valor){
	if (this->posicoes >= this->length){
		return -1; // pilha virtualmente cheia
	} else {
		this->posicoes.push(valor);
	}

Buffer::remove(){
	if (this->posicoes < 1){
		return false; // erro devido a fila vazia
	} else {
		this->posicoes.pop();
		return true;
	}
}



