
typedef struct arv Arv;

/* Funcao que cria uma Arvore Binaria vazia. */
Arv* arv_cria_vazia(void);
/* Funcao que cria um no em uma Arvore Binaria. */
Arv* arv_cria_no(char c, Arv *sae, Arv *sad);
/* Testa se uma Arvore Binaria e vazia. */
int arv_vazia();
/* Funcao que imprime os elementos da Arvore Binaria. */
void arv_imprime(Arv *a);
/* Funcao que determina se um caractere pertence a uma Arvore. */
int arv_pertence(Arv *a, char c);
/* Libera o espaco alcoado para uma arvore Binaria. */
void arv_libera(Arv *a);
/* Funcao que determina a altura de uma arvore. */
int arv_altura(Arv *a);
