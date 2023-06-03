#include<stdio.h>
#include<stdlib.h>
#include "lista_circular.h"

struct lista_circ {
  int info;
  ListaCirc* prox;
};


ListaCirc* lst_circ_insere(ListaCirc *l, int info)
{
  ListaCirc* ln = (ListaCirc*) malloc(sizeof(ListaCirc));
  ln->info = info;
  if(l==NULL)
    ln->prox = ln;
  else {
    ln->prox = l->prox;
    l->prox = ln;
  }
  return ln;
}

void lst_circ_imprime(ListaCirc* l)
{
  if(l!=NULL) {
    ListaCirc* lAux = l;
    printf("Lista de elementos: \n");
    do {
      printf("Info = %d\n", lAux->info);
      lAux = lAux->prox;
    } while(lAux != l);
  }
}


