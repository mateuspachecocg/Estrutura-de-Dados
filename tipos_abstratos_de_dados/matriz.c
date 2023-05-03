#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

struct matriz {
  int lin;
  int col;
  float** v;
};


Matriz* mat_cria(int m, int n)
{
  Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
  mat->lin = m;
  mat->col = n;
  mat->v = (float**) malloc(m*sizeof(float*));

  for (int i=0; i<n; i++) {
    mat->v[i] = (float*) malloc(n*sizeof(float));
  }

  return mat;
}


void mat_libera(Matriz *mat)
{
    for (int i=0; i<mat->lin; i++)
      free(mat->v[i]);
    free(mat->v);
    free(mat);
}

float mat_acessa(Matriz* mat, int i, int j) {
  
  if (i < mat->lin && j < mat->col && i > -1 && j > -1) {
    return mat->v[i][j];
  } else {
    printf("Indices fora do escopo");
    return -1.0;
  }

}

void mat_atribui(Matriz *mat, int i, int j, float v) {
  if (i < mat->lin && j < mat->col && i > -1 && j > -1) {
    mat->v[i][j] = v;
  } else {
    printf("Indices fora do escopo");

  }
}

int mat_linhas (Matriz* mat) {
  return mat->lin;
}

int mat_colunas(Matriz* mat) {
  return mat->col;
}
