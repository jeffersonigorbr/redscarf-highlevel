#import "packet.h"

packet::packet(){

}

packet::~packet(){

}

packet::void set_flit_packet(flit flit_packet[SIZE_FLIT_PACKET]){
	for (int i = 0; i < SIZE_FLIT_PACKET; i++){
		if (i == 0){
			flit_packet.type = CABECALHO;
		}else if(i == (SIZE_FLIT_PACKET - 1)){
			flit_packet.type = TERMINADOR;
		}else{
			flit_packet.type = INSTRUCAO;
		}
	}
	
	this->flit_packet = flit_packet;
}

packet::void set_destino(Coodernada destino){
	this->destino = destino;
}
