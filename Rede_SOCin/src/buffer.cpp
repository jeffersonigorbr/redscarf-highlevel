#include "buffer.h"

Buffer::Buffer() {
	controle_fluxo = new Controle_fluxo();
}

Buffer::~Buffer() {
	
}

//Funcionando
void Buffer::add(Flit flit) {
	this->flits.push(flit);
}
//Funcionando
void Buffer::remove() {
	this->flits.pop();
}

//Se estiver Vazio retorna 1, senão retorna 0
int Buffer::isEmpty() {
	return (this->flits.empty() == 1) ? 1: 0;
}

