
typedef struct fila Fila;

/* Funcao que cria uma fila */
Fila* fila_cria(void);
/* Testa se uma Fila eh vazia */
int fila_vazia(Fila* f);
/* Funcao que adiciona um elemento em uma Fila. */
void fila_insere(Fila* f, int info);
/* Funcao que remove um elemento de uma fila */
int fila_remove(Fila* f);
/* Funcao que imprime os elementos de uma Fila. */
void fila_imprime(Fila* f);
/* Libera o espaco alocado para uma Fila. */
void fila_libera(Fila *f);
/* a - Retorna o numero de elementos com valor maior que n */
int qtd_maior(Fila* f, int n);
/* b - Cria uma fila com os elementos da fila f na ordem inversa */
Fila* inverte(Fila* f);
/* c - Retorna o numero de elementos da fila que possuem campo info
* com valor par*/
int pares(Fila* f);
