#include "buffer.h"

Buffer::Buffer(sc_int capacidade){
	this->length = capacidade;
}

Buffer::isEmpty(){
	if (this->posicoes.isEmpty()){
		return 1;
	} else {
		return 0;
	}
}
Buffer::add(sc_int valor){
	if (posicoes.isFull()){
		return -1; // queue is full
	} else {
		this->posicoes.push(valor);
	}
Buffer::remove(){
	if (this->posicoes.size() < 1){
		return 0; // queue is empty. Nothing to remove
	} else {
		return this->posicoes.pop();
	}
}	
Buffer::isFull(){
	if (this->posicoes.size() == this->length){
		return 1;
	} else {
		return 0;
		}
}
