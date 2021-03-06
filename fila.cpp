#include "fila.h"

		fila::fila(int size){
			this->capacity = (size+1);
			this->dados[size+1] = LONG_MIN; // define a sentinel to avoid overflow
			this->nItens = 0;
			this->primeiro = 0;
			this->ultimo = 0;			
		}
		int fila::size(){
			return this->nItens;		
		}
		
		sc_int<32> fila::isFull(){
			if ((this->nItens +1) == this->capacity){ // the last is the sentinel (beyond the real capacity), due this, we need to compare nItens +1
				return 1; // true, is full
			} else {
				return 0; // negative, there is empty spaces				
				}
		}
		
		sc_int<32> fila::isEmpty(){
			if (this->size() == 0){
				return 1;
			} else {
				return -1;
			}
		}
		
		void fila::moveOn(){
			sc_int<32> i = 0;
			std::vector<sc_int<32>> temp = this->dados;
			while (temp[i+1] != LONG_MIN){
				temp[i] = temp[i+1];
				i++;
			}
			this->ultimo = dados[i];
			this->primeiro = dados[0];
			this->dados = temp;
		}
		
		sc_int<32> fila::pop(){ // remove the next element
			if (this->nItens = 0){
				return -1;
			} else {
				sc_int<32> data_temp = this->dados[this->primeiro];
				nItens = nItens - 1;
				this->moveOn();
				return data_temp;
			}
		}
		
		sc_int<32> fila::push(sc_int<32> data){ // add an element to queue
			if (this->isFull() = 1){
				return -1;
			} else {
				this-nItens++;
				this->dados[nItens] = data;
				this->ultimo = this->dados[(this->nItens -1)];
				return 1;
			}
		}
		
				
				
			
