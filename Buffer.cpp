#include "Buffer.h"

Buffer::Buffer(sc_int<32> capacidade){
	this->length = capacidade;
}

sc_int<32> Buffer::isEmpty(){
	if (posicoes.isEmpty() == 1){
		return 1;
	} else {
		return 0;
	}
}
void Buffer::add(){
	while (wr.read() == 1){
		
		if (posicoes.isFull() == 1){
			wok.write(0); // error, value not added
		} else {
			posicoes.push(din.read());
		}
	}
	wok.write(1);
}

void Buffer::remove(){
	if (posicoes.size() < 1){
		rok.write(0); // queue is empty. Nothing to remove
	} else if (rd.read() == 1){
		dout.write(posicoes.pop());
		rok.write(1);
	}
}
	
sc_int<32> Buffer::isFull(){
	if (posicoes.size() == this->length){
		return 1;
	} else {
		return 0;
		}
}
