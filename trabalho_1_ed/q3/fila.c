#include<stdio.h>
#include<stdlib.h>
#include "fila.h"

typedef struct lista Lista;
typedef struct fila Fila;

struct lista {
  int info;
  Lista *prox;
};

struct fila {
  Lista *ini;
  Lista *fim;
};

Fila* fila_cria(void) {
  Fila *f = (Fila*) malloc(sizeof(Fila));
  if(f==NULL) {
    printf("Memoria Insuficiente\n");
    exit(1);
  }
  f->ini = NULL;
  f->fim = NULL;
  return f;
}

void fila_insere(Fila *f, int info) {
  Lista *l = (Lista*) malloc(sizeof(Lista));
  if(l==NULL) {
    printf("Memoria Insuficiente\n");
    exit(1);
  }
  l->prox = NULL; /* novo node passa a ser o ultimo */
  l->info = info; /* armazena a informacao */ 
  if(!fila_vazia(f)) /* verifica se lista nao estava vazia */
    f->fim->prox = l;
  else               /* fila estava vazia */
     f->ini = l;

  f->fim = l;
}

int fila_vazia(Fila *f) {
  return f->ini==NULL;
}

int fila_remove(Fila *f) {
  Lista *l; int a;
  if(fila_vazia(f)) {
    printf("Fila Vazia!!!\n");
    exit(1); /* Aborta o programa */
  }
  l = f->ini;
  a = l->info;
  f->ini = f->ini->prox;
  free(l);
  if(f->ini==NULL) /* Verifica se fila ficou vazia */
    f->fim = NULL;
  return a;
}

void fila_libera(Fila *f)
{
  Lista* q = f->ini;
  Lista* t;
  while(q!=NULL){
    t = q->prox;
    free(q);
    q = t;
  }
}

void fila_imprime(Fila *f)
{
  if(fila_vazia(f)){
    printf("Fila Vazia\n");
    return;
  }

  Lista* lAux = f->ini;
  while(lAux != NULL) {
    printf("info: %d\n", lAux->info);
    lAux = lAux->prox;
  }
}

Fila* inverte(Fila *f)
{
  if(fila_vazia(f)){
    printf("Fila Vazia\n");
    exit(1);
  }
  Fila* fNew = fila_cria();
  Lista* lNew;
  Lista* lAnt = NULL;
  Lista* lAux = f->ini;
  int control = 1;
  while(lAux != NULL) {
    Lista* lNew = (Lista*) malloc(sizeof(Lista));
    lNew->info = lAux->info;
    lNew->prox = lAnt;
    lAnt = lNew;
    if(lAux->prox == NULL) {
      fNew->ini = lAnt;
    }
    lAux = lAux->prox;
    if(control == 1){
      fNew->fim = lNew;
      control = 0;
    }
  }
  
  return fNew;
}

int pares(Fila* f)
{
  int pares = 0;
  Lista* lAux = f->ini;
  while(lAux!=NULL) {
    if(lAux->info % 2 == 0)
      pares++;
    lAux = lAux->prox;
  }
  return pares;
}
