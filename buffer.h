#include <queue>
#include "systemc.h"
#include "interfaces.cpp"

class buffer : public sc_channel, public write_if, public read_if {
        private:
        sc_int<32> length;
        queue <sc_int<32>> posicoes;
        sc_logic estaCheio(){}
        sc_logic estaVazio(){}
        sc_event write_event, read_event;
        public:
        void add(sc_int){}
        sc_int remove(){}
        buffer(sc_int){}
                        
}                
