typedef struct arvb ArvB;

/* Funcao que cria uma Arvore Binaria de Busca Vazia. */
ArvB* arvb_cria_vazia(void);
/* Testa se uma Arvore Binaria e vazia. */
int arvb_vazia(ArvB* a);
/* Funcao que busca a sub-arvore que contem um inteiro. */
ArvB* arvb_busca(ArvB* a, int c);
/* Funcao que imprime os elementos de uma Arvore. */
void arvb_imprime(ArvB* a);
/* Funcao que insere um inteiro em uma Arvore. */
ArvB* arvb_insere(ArvB* a, int c);
/* Funcao que remove um inteiro em uma Arvore. */
ArvB* arvb_remove(ArvB* a, int c);
/* libera o espaço alocado para uma Arvore. */
void arvb_libera(ArvB* a);
/* Retorna a altura de uma arvore binaria */
int arvb_altura(ArvB* a);

/* Funcao que retorna a quantidade de folhas que possuem no campo
* info um numero pirmo */
int folhas_primos(ArvB* a);
/* Funcao que retorna a quantidade nos cujas as subarvores esuqerda e diretia nao
* sao vazias e tem igual altura. */
int nos_igual_altura(ArvB* a);
/* Funcao que compare se duas arvores binarias de busca sao iguais. */
int iguais(ArvB* a, ArvB* b);

