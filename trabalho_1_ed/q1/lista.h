
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
