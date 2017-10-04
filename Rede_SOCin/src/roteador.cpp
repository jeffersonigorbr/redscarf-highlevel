#include "roteador.h"

Roteador::Roteador() {
	this->in_data = new Flit();
	this->arbitro = new Arbitro();
	this->roteamento = new Roteamento();
	//Passar o valor atual da posição do roteador...
	this->buffer = new Buffer();
	this->controle_fluxo = new Controle_fluxo();
}

Roteador::~Roteador() {
	
}

void Roteador::execute() {
	this->controle_fluxo->setIn_val(in_val);
	this->buffer->wok = this->buffer->isEmpty();
	this->controle_fluxo->setWok(this->buffer->wok);
	this->controle_fluxo->setIn_ack(this->controle_fluxo->getWok());
	this->in_ack = this->controle_fluxo->getIn_ack();
	// SE IN_ACK FOR 1 PODE ESCREVER O DADO EM IN_DATA

	if (this->in_ack == 1)
	{
		this->roteamento->in_data = this->in_data;
		this->roteamento->cordenada_destino.x = in_data->cordenadas_f.x;
		this->roteamento->cordenada_destino.y = in_data->cordenadas_f.y;
	}
}
void Roteador::arbitragem() {

}