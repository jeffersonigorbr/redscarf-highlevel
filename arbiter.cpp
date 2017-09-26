#include <Arbiter.h>

Arbiter::Arbiter()
{

}

Arbiter::~Arbiter()
{

}

void Arbiter::setPriority(){
	if ((this->ponteiro = NORTE) && (this->port != NORTE)){
		this->priority = NORTE;
	}
	if ((this->ponteiro = LESTE) && (this->port != LESTE)){
		this->priority = LESTE;
	}
	if ((this->ponteiro = SUL) && (this->port != SUL)){
		this->priority = SUL;
	}
	if ((this->ponteiro = OESTE) && (this->port != OESTE)){
		this->priority = OESTE;
	}

}

int Arbiter::verificaPriority(){
	return this->priority;
}

int Arbiter::verificaCall(){
	//verifica se tem solicitação no buffer prioritário e retorna a porta de solicitação
	//se não tiver, muda a prioridade pro próximo buffer e verifica novamente
	//se tiver, espera o buffer enviar todo o pacote e muda a prioridade novamente
}

int Arbiter::verificaBuffer(buffer Buffer){
	int priority = verificaPriority();
	//verificar qual buffer está tentando acessar a porta
	if((Buffer.port != this->port) && (Buffer == priority)){
		//verifica se o pacote todo já foi encaminhado, se sim, passa a prioridade para outro
		if (Buffer.posicoes.type = 2){
			if(priority != 4){
				priority = priority + 1;
				this->priority = priority;
				setPriority();
			}else{
				priority = 0;
				this->priority = priority;
				setPriority();
			}
		}
	}else{
		return ERROR;
	}

}