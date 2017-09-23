#include <climits>
#include "systemc.h"

class fila {
private:
        sc_int capacity;
        sc_int dados[capacity];
        sc_int primeiro;
        sc_int ultimo;
        sc_int nItens;
public:
		sc_int push(sc_int){}
		sc_int pop(){}
		fila(sc_int size){}
		sc_int size(){}
		sc_int isFull(){}
		sc_int isEmpty(){}
		void moveOn(){} // used for organize the queue. Move the elements to next position (1,2,3,4,5 to 0,1,2,3,4)
		 
		
                        
                        
        
