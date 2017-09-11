#include "buffer.h"

<<<<<<< HEAD
buffer::buffer(sc_int capacidade){
=======
Buffer::Buffer(int capacidade){
>>>>>>> 64a29e497c6e27993ac63f8e36b30774b0e199e6
	this->length = capacidade;
}

Buffer::estaVazio(){
	if (this->posicoes.size() == 0){
		return 1;
	} else {
		return 0;
	}
}

<<<<<<< HEAD
buffer::add(sc_int valor){
=======
Buffer::add(int valor){
>>>>>>> 64a29e497c6e27993ac63f8e36b30774b0e199e6
	if (this->posicoes >= this->length){
		wait(read_event);
		return -1; // pilha virtualmente cheia
	} else {
		this->posicoes.push(valor);
		write_event.notify();
	}

Buffer::remove(){
	if (this->posicoes < 1){
		wait(write_event);
		return 0; // erro devido a fila vazia
	} else {
		read_event.notify();
		return (this->posicoes.pop());
	}
<<<<<<< HEAD
}	

buffer::estaCheio(){
	if (this->posicoes.size == this->length){
		return 1;
	} else {
		return 0;
		}
}
	
		
	
=======
}



>>>>>>> 64a29e497c6e27993ac63f8e36b30774b0e199e6
