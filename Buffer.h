#include <systemc.h>
#include "interfaces.cpp"
#include "fila.h"
#include "flit.h"
/* portas/sinais feitos de acordo com a imagem do roteador SoCIN.
 * Dúvidas: como posso acionar os outros métodos via SC_METHOD? Pq a lista de sensibilidade está ok, mas não está acionando o método de leitura do buffer (apenas adição)
 * 
 */
 
class Buffer : public sc_module {
        private:
			sc_int<32> length;
			fila posicoes(flit);
			sc_in<sc_int<34>> din; // data + bop + eop
			sc_in<sc_int<32>> wr;
			sc_in<sc_int<32>> rd;
			sc_out<sc_int<32>> wok;
			sc_out<sc_int<32>> dout;
			sc_out<sc_int<32>> rok;
			
        public:
			sc_int<32> isFull();
			sc_int<32> isEmpty();
			void add();
			void remove();
			Buffer(sc_int<32>);
			SC_CTOR(Buffer){
				SC_METHOD(add);
				sensitive << din;
				sensitive << wr;
				sensitive << rd;
			}
                        
};                
