#ifndef _CHANNEL_H_
#define _CHANNEL_H_
#include <vector>
#include <exception>
#include <iostream>
#include "systemc.h"

template <typename T>
class Canal
{
public:


	// Ver implementação para poder fazer o construtor... 
	// Botar um sinal SC_LOGIC_1 sensitivo no destino, se tá vazio envia um sinal
	
	void recebe_dado(T dado) {
		if (estaVazio())
			fila.write(dado);
	}

	T enviar_dado() {
		try {
		if (sinal == 1)
			return fila.read();
		} catch (std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}

	}
	// Se o canal está vazio retorna true
	bool estaVazio() {
		// nb_read() é um método da fifo que retorna false caso a fila esteja com espaço livre
		if (fila.nb_read(aux)==false)
			return true;
	};

	int numero_slots_livres() {
		return fila.num_free();
	};

private:
	//Se o roteador estiver livre mande um sinal 1
	sc_in<sc_logic> sinal;
	// Um auxiliar qualquer apenas para usar o nb_read()
	int aux;
	// Posição do roteador de origem
	std::vector<std::vector<int>> roteador_origem;
	// Posição do roteador de destino 
	std::vector<std::vector<int>> roteador_destino;
	// Largura do Canal
	sc_uint<16> largura;
	// Fila de entrada do Canal
	sc_fifo<T> fila;
	
};

#endif
