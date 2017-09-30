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
	if (this->buffercircular[NORTH] == 0)
	{
		priority.write(0);
	}else if (this->buffercircular[EAST] == 0)
	{
		priority.write(0);
	}else if (this->buffercircular[SOUTH] == 0)
	{
		priority.write(0);
	} else if (this->buffercircular[WEST] == 0)
	{
		priority.write(0);
	}


}

//Verifica em qual buffer se encontra a prioridade no momento
int Arbiter::checkPriority(sc_in <Buffer> buffer){
	if (buffercircular[0]==1)
	{
		return NORTH;
	} else 	if (buffercircular[1]==1)
	{
		return EAST;
	} else 	if (buffercircular[2]==1)
	{
		return SOUTH;
	} else 	if (buffercircular[3]==1)
	{
		return WEST;
	} else 	if (buffercircular[4]==1)
	{
		return LOCAL;
	} 
	return -1;
}

