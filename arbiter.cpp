#include <Arbiter.h>

//Verifica a disponibilidade do buffer que estão tentando enviar pacotes
//Vai escrever na porta de saída work se o buffer ta enviando, esperando ou livre
//Não vi na classe Buffer um método que me dê retorno do status do buffer, esse acesso ao status do buffer é meramente ilustrativo
void Arbiter::checkAvailiability(){
	if (portDestiny.read() == NORTH){
		if (bufferN.status = SENDING){
			work.write(SENDING);
		}else if (bufferN.status = WAITING){
			work.write(WAITING);
		}else{
			work.write(FREE);
		}
	}

	if (portDestiny.read() == EAST){
		if (bufferE.status = SENDING){
			work.write(SENDING);
		}else if (bufferE.status = WAITING){
			work.write(WAITING);
		}else{
			work.write(FREE);
		}
	}

	if (portDestiny.read() == SOUTH){
		if (bufferS.status = SENDING){
			work.write(SENDING);
		}else if (bufferS.status = WAITING){
			work.write(WAITING);
		}else{
			work.write(FREE);
		}
	}

	if (portDestiny.read() == WEST){
		if (bufferW.status = SENDING){
			work.write(SENDING);
		}else if (bufferW.status = WAITING){
			work.write(WAITING);
		}else{
			work.write(FREE);
		}
	}

}
//A prioridade se inicia no buffer north. Se o buffer ta vazio a prioridade é passada pro buffer seguinte.
//Caso no buffer tenham pacotes passando a prioridade só passa para o próximo buffer quando o mesmo terminar de enviar um pacote.
void Arbiter::setPriority(){
	if (this->pointer = NORTH){
		if (bufferN.isEmpty() == 1){
			this->pointer = EAST;
		}else{
			//Não tô sabendo como ler o buffer e verificar se o pacote foi enviado
		}
	}

	if (this->pointer = EAST){
		if (bufferN.isEmpty() == 1){
			this->pointer = SOUTH;
		}else{
			//Não tô sabendo como ler o buffer e verificar se o pacote foi enviado
		}
	}

	if (this->pointer = SOUTH){
		if (bufferN.isEmpty() == 1){
			this->pointer = WEST;
		}else{
			//Não tô sabendo como ler o buffer e verificar se o pacote foi enviado
		}
	}

	if (this->pointer = WEST){
		if (bufferN.isEmpty() == 1){
			this->pointer = NORTH;
		}else{
			//Não tô sabendo como ler o buffer e verificar se o pacote foi enviado
		}
	}

}

//Verifica em qual buffer se encontra a prioridade no momento
void Arbiter::checkPriority(){
	priority.write(this->pointer);
}

