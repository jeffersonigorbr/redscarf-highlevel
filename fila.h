#include <climits>
#include "systemc.h"


#define depth 8
class fila {
private:
        sc_int<32> capacity;
        std::vector<sc_int<32>> dados;
        sc_int<32> primeiro;
        sc_int<32> ultimo;
        sc_int<32> nItens;
public:
		sc_int<32> push(sc_int<32>);
		sc_int<32> pop();
		fila(int);
		int size();
		sc_int<32> isFull();
		sc_int<32> isEmpty();
		void moveOn(); // used for organize the queue. Move the elements to next position (1,2,3,4,5 to 0,1,2,3,4)
		void sc_main();
};		 
		
                        
                        
        
