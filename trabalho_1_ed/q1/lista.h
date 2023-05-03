
typedef struct lista Lista;


/* Cria uma lista vazia */
Lista* lst_cria();
/* Testa se uma lista e vazia */
int lst_vazia(Lista *l);
/* Insere um elemento no inicio da lista */
Lista* lst_insere(Lista *l, int info);
/* Busca em elemento no início da lista */
Lista* lst_busca(Lista *l, int info);
/* Imprime uma lista */
void lst_imprime(Lista *l);
/* Remove um elemento de uma lista */
Lista* lst_remove(Lista *l, int info);
/* Libera o espaço alocado por uma lista */
void lst_libera(Lista *l);
/* Insere elementos em ordem crescente na lista */
Lista* lst_insere_ordenado(Lista *l, int info);
/* Funcao Recursiva: imprimir os elementos da lista */
void lst_imprime_rec(Lista* l);
/* Funcao Recursiva: Imprime a lista de forma invertida */
void lst_imprime_invertida_rec(Lista* l);
/* Funcao Recursiva: Remove elementos da lista. */
Lista* lst_remove_rec(Lista *l, int info);
/* Funcao Recursiva: Libera memoria ocupada pela lista */
void lst_libera_rec(Lista* l);
/* Funcao recursiva: que verifica se duas listas sao iguais */
int lst_igual_rec(Lista* l1, Lista* l2);
/* Retorna o numero de nodes da lista */
int comprimento(Lista *l);


