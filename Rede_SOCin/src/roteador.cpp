#include "roteador.h"
/*
Roteador::Roteador() {
	this->arbitro = new Arbitro();
	//Passar o valor atual da posição do roteador...
	this->buffer = new Buffer();
	this->controle_fluxo = new Controle_fluxo();
}

Roteador::~Roteador() {
	
}

void Roteador::execute() {

	//this->controle_fluxo->setIn_val(in_val);
	this->buffer->wok.write(this->buffer->isEmpty());
	std::cout << "BUFFER WOK " <<this->buffer->wok << std::endl;

	//this->controle_fluxo->setWok(this->buffer->wok.read());

	this->controle_fluxo->setIn_ack(this->controle_fluxo->getWok());
	this->in_ack = this->controle_fluxo->getIn_ack();
	// SE IN_ACK FOR 1 PODE ESCREVER O DADO EM IN_DATA
	
	if (this->in_ack == 1)
	{
		this->roteamento.in_data = this->in_data;
		this->roteamento.cordenada_destino.x = in_data.cordenadas_f.x;
		this->roteamento.cordenada_destino.y = in_data.cordenadas_f.y;
	}
	

}*/
void roteador::arbitragem() {

}