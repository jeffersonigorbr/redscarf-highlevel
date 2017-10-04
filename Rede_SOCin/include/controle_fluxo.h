#ifndef _CONTROLE_FLUXO_H_
#define _CONTROLE_FLUXO_H_ 

#include <iostream>

class Controle_fluxo
{
public:
	int in_val; //Entrada pra ver se no buffer terá espaço 
	int in_ack; //Retorno da solicitação se terá espaço

	int wr; //Saída que vai para o buffer
	int wok; //Entrada que vem do buffer

	void setIn_val(int x) 
	{
		this->in_val = x;
	}


	int getIn_val() 
	{
		return this->in_val;
	}
	

	void setWok(int x) 
	{
		this->wok = x;
	}

	int getWok() 
	{
		return this->wok;
	}

	void setWr(int x) 
	{
		this->wr = x;
	}

	int getWr() 
	{
		return this->wr;
	}
	
	void setIn_ack(int x) 
	{
		this->in_ack = x;
	}

	int getIn_ack() 
	{
		return this->in_ack;
	}	

	Controle_fluxo();
	~Controle_fluxo();
	
};
#endif