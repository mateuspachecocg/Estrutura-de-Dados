/* TAD: Lista Encadeada */

typedef struct lista Lista;

/* Funcao de criacao: retorna uma lista vazia */
Lista* lst_cria (void);

/* Funcao de insercao: retorna lista atualizada com o novo elemento inserido. */
Lista* lst_insercao_inicio (Lista* l, int n);
