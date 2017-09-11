#include <queue>
#include "systemc.h"
#include "interfaces.cpp"

<<<<<<< HEAD
class buffer : public sc_channel, public write_if, public read_if {
=======
class Buffer {
>>>>>>> 64a29e497c6e27993ac63f8e36b30774b0e199e6
        private:
        sc_int<32> length;
        queue <sc_int<32>> posicoes;
        sc_logic estaCheio(){}
        sc_logic estaVazio(){}
        sc_event write_event, read_event;
        public:
<<<<<<< HEAD
        void add(sc_int){}
        sc_int remove(){}
        buffer(sc_int){}
                        
}                
=======
        bool estaVazio(){}
        void add(int){}
        bool remove(){}
        buffer(int){}

}
>>>>>>> 64a29e497c6e27993ac63f8e36b30774b0e199e6
