#include <queue>
#include <systemc.h>
#include "interfaces.cpp"
#include "fila.h"

class buffer : public sc_channel {
        private:
        sc_int<32> length;
        fila posicoes(length);
        public:
        sc_logic isFull(){}
        sc_logic isEmpty(){}
        void add(sc_int){}
        sc_int remove(){}
        buffer(sc_int){}
                        
}                
