
typedef struct fila Fila;

/* Funcao que cria uma fila */
Fila* fila_cria(void);
/* Testa se uma Fila eh vazia */
int fila_vazia(Fila* f);
/* Funcao que adiciona um elemento em uma Fila. */
void fila_insere(Fila* f, float v);
/* Funcao que remove um elemento de uma fila */
float fila_retira(Fila* f);
/* Funcao que imprime os elementos de uma Fila. */
void fila_imprime(Fila* f);
/* Libera o espaco alocado para uma Fila. */
void fila_libera(Fila *f);

