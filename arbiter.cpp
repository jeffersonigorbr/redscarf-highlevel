#include <Arbiter.h>

//Verifica a disponibilidade do buffer que estão tentando enviar pacotes
//Vai escrever na porta de saída work se o buffer ta enviando, esperando ou livre
//Não vi na classe Buffer um método que me dê retorno do status do buffer, esse acesso ao status do buffer é meramente ilustrativo
void Arbiter::checkAvailiability(){
	if (portDestiny.read() == NORTH){
		this->buffercircular[NORTH] = 1;
	}
	if (portDestiny.read() == EAST){
		this->buffercircular[EAST] = 1;
	}
	if (portDestiny.read() == SOUTH){
		this->buffercircular[SOUTH] = 1;
	}
	if (portDestiny.read() == WEST){
		this->buffercircular[WEST] = 1;
	}
	if (portDestiny.read() == LOCAL){
		this->buffercircular[LOCAL] = 1;
	}
	
}
//A prioridade se inicia no buffer north. Se o buffer ta vazio a prioridade é passada pro buffer seguinte.
//Caso no buffer tenham pacotes passando a prioridade só passa para o próximo buffer quando o mesmo terminar de enviar um pacote.
void Arbiter::setPriority(){
	

}

//Verifica em qual buffer se encontra a prioridade no momento
void Arbiter::checkPriority(sc_in <Buffer> buffer){
	priority.write(this->pointer);

	// A prioridade é do buffer circular do arbitro

	// Buffer circular em cada porta de saída

}

