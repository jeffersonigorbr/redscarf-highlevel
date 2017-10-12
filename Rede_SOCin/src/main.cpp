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




	return 0;
}