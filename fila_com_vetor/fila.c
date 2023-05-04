#include<stdio.h>
#include<stdlib.h>
#include "fila.h"

#define N 100

struct fila {
  int n; /* numero de elementos armazenados na fila */
  int ini; /* indice para indicar inicio da fila */
  float vet[N];
};


Fila* fila_cria(void)
{
  Fila* f = (Fila*) malloc(sizeof(Fila));
  f->n = 0; /* inicializa fila vazia */
  f->ini = 0; /* escolhe uma posicao inicial */
  return f;
}

void fila_insere(Fila* f, float v) {
  int fim;
  if(f->n == N) { /* fila cheia: capacidade esgotada */
    printf("Capacidade da fila estorou.\n");
    exit(1); /* aborta programa */
 }
  /* insere elemento na proxima posicao livre */
  fim = (f->ini + f->n) % N;
  f->vet[fim] = v;
  f->n++;
}

float fila_retira(Fila* f)
{
  float v;
  if(fila_vazia(f)){
    printf("Fila Vazia.\n");
    exit(1);
  }
  /* retira elemento do inicio */
  v = f->vet[f->ini];
  f->ini = (f->ini+1) % N;
  f->n--;
  return v;
}

int fila_vazia (Fila* f)
{
  return f->n == 0;
}

void fila_libera (Fila* f)
{
  free(f);
}

void fila_imprime (Fila* f)
{
  int i;
  for(i=0;i<f->n;i++){
    printf("info: %0.1f\n", f->vet[(f->ini+i) % N]);
  }
}
