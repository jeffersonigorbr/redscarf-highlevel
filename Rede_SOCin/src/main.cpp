#include <iostream>
#include <vector>
#include "systemc.h"
#include "pacote.h"
#include "buffer.h"
#include "flit.h"
#include "roteamento.h"
#include "roteador.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Pacote pct;
	//Setar as cordenadas destinos dos flits...

	//Sinais do controle de fluxo
	sc_signal < sc_int<32> > in_ack_BN;
	sc_signal < sc_int<32> > in_ack_BS;
	sc_signal < sc_int<32> > in_ack_BL;
	sc_signal < sc_int<32> > in_ack_BO;

	sc_signal < sc_int<32> > in_val_BN;
	sc_signal < sc_int<32> > in_val_BS;
	sc_signal < sc_int<32> > in_val_BL;
	sc_signal < sc_int<32> > in_val_BO;

	//Sinais do controle de fluxo para o buffer
	sc_signal < sc_int<32> > wr_BN;
	sc_signal < sc_int<32> > wr_BS;
	sc_signal < sc_int<32> > wr_BL;
	sc_signal < sc_int<32> > wr_BO;

	sc_signal < sc_int<32> > wok_BN;
	sc_signal < sc_int<32> > wok_BS;
	sc_signal < sc_int<32> > wok_BL;
	sc_signal < sc_int<32> > wok_BO;	

//****************************************
	sc_signal < sc_int<32> > rd_BN;
	sc_signal < sc_int<32> > rd_BS;
	sc_signal < sc_int<32> > rd_BL;
	sc_signal < sc_int<32> > rd_BO;

	sc_signal < sc_int<32> > rok_BN;
	sc_signal < sc_int<32> > rok_BS;
	sc_signal < sc_int<32> > rok_BL;
	sc_signal < sc_int<32> > rok_BO;
//****************************************


// Criar uma Rede 4x4
	roteador *rede[3][3];

// Criando os roteadores para alocar na rede
	roteador roteador1("rot1");
	Buffer *buffw;
	//roteador1.in_data = pct.flit[0];
	std::cout<< roteador1.buffer_norte->din.payload << endl;



	//std::cout<< buffw->din.payload << endl; //= pct.flit[0];
	//roteador1.buffer_norte->din = pct.flit[0];
	//std::cout << roteador1.buffer_norte->din.payload;

	return 0;
}