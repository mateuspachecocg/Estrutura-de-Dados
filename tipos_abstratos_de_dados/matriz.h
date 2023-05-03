/* TAD: matriz m por n */

typedef struct matriz Matriz;

/* Funcao Cria
  * Operacao que cria uma matriz de dimensao m por n
  */
Matriz* mat_cria (int m, int n);

/* Funcao Libera
  * Operacao que libera a memoria alocada para a matriz
  */
void mat_libera (Matriz* mat);

/* Funcao Acessa
  * Operacao que acessa o elemento da linha e da coluna j da matriz
  */
float mat_acessa (Matriz* mat, int i, int j);

/* Funcao Atribui
  * Operacao que atribui o elemento da linha e da coluna j da matriz
  */
void mat_atribui (Matriz* mat, int i, int j, float v);

/* Funcao Linhas
  * Operacao que retorna o númerro de linhas da matriz
  */
int mat_linhas (Matriz* mat);

/* Funcao Colunas
  * Operacao que retorna o numero de colunas da matriz
  */
int mat_colunas(Matriz*  mat);
