#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

struct lista {
  int info;
  Lista *prox;
};

/* Cria uma lista vazia */
Lista* lst_cria() {
  return NULL;
}

/* Testa se uma lista e vazia */
int lst_vazia(Lista *l) {
  return (l == NULL);
}

/* Insere um elemento no inicio da lista */
Lista* lst_insere(Lista *l, int info) {
  Lista* ln = (Lista*) malloc(sizeof(Lista));
  ln->info = info;
  ln->prox = l;
  return ln;
}

/* Busca um elemento em uma lista */
Lista* lst_busca(Lista *l, int info) {
  Lista* lAux = l;
  while(lAux != NULL) {
    if(lAux->info == info) {
      return lAux;
    } else {
      lAux = lAux->prox;
    }
  }
  return NULL;
}

/* Imprime uma lista */
void lst_imprime(Lista *l) {
  Lista* lAux = l;
  while(lAux != NULL) {
    printf("Info = %d \n", lAux->info);
    lAux = lAux->prox;
  }
}

/* Libera o espaco alocado por uma lista */
void lst_libera(Lista *l) {
  Lista* lProx;
  while(l!=NULL) {
    lProx = l->prox;
    free(l);
    l = lProx;
  }
}
