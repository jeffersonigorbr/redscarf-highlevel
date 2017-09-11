class fila {
private:
        int capacidade;
        int *dados;
        int primeiro;
        int ultimo;
        int nItens;
public:
        void criarFila(fila *f, int capacidade){
                f->capacidade = capacidade;
                f->dados = (int *) malloc (f->capacidade * sizeof(int));
                f->primeiro = 0;
                f->ultimo = -1;
                f-> nItens = 0;
        }
        void inserir(fila *f, int valor){
                if (f->ultimo == f->capacidade -1){
                        
                        
        
