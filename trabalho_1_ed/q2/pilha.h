
typedef struct pilha Pilha;

/*Função que cria uma pilha.*/
Pilha* pilha_cria(void);
/*Testa se uma pilha é vazia.*/
int pilha_vazia(Pilha *p);
/*Função que adiciona um elemento no topo de uma pilha.*/
void pilha_push(Pilha *p, int info);
/*Função que remove um elemento do topo de uma pilha.*/
int pilha_pop(Pilha *p);
/*Função que imprime os elementos de uma pilha;*/
void pilha_imprime(Pilha *p);
/*Libera o espaço alocado para uma pilha.*/
void pilha_libera(Pilha *p);
/* a - Retorna o valor armazenado no topo da pila */
int topo(Pilha* p);
/* b - Retorna o numero de elemtenos da pilha que possuem o campo info com valor ímpar */
int impares(Pilha *p);
/* c - Empilhamento em ordem crescente dos elementos pares de uma pilha */
Pilha* empilha_pares(Pilha* p1, Pilha* p2);
