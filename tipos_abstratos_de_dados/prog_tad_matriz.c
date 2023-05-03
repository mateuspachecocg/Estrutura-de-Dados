#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main (void) {
  Matriz* matriz = mat_cria(3, 3);

  /* Criando a matriz
  * | 1.0 2.0 3.0 |
  * | 4.0 5.0 6.0 |
  * | 7.0 8.0 9.0 |
  */
  int linhas = mat_linhas(matriz);
  int colunas = mat_colunas(matriz);
  printf("O numero de linhas %d e colunas %d\n", linhas, colunas);

  mat_atribui(matriz, 0, 0, 1.0);
  mat_atribui(matriz, 0, 1, 2.0);
  mat_atribui(matriz, 0, 2, 3.0);
  mat_atribui(matriz, 1, 0, 4.0);
  mat_atribui(matriz, 1, 1, 5.0);
  mat_atribui(matriz, 1, 2, 6.0);
  mat_atribui(matriz, 2, 0, 7.0);
  mat_atribui(matriz, 2, 1, 8.0);
  mat_atribui(matriz, 2, 2, 9.0);

  printf("O elemento (1, 1) : %.1f\n", mat_acessa(matriz, 1, 1));
  printf("O elemento (2, 0) : %.1f\n", mat_acessa(matriz, 2, 0));

  mat_libera(matriz);
}
