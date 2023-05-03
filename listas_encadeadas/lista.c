#include <stdio.h>
#include <stdlib.h>

struct lista {
  int info;
  struct lista* prox;
};

typedef struct lista Lista;

/* Funcao de criacao: retorna uma lista vazia */
Lista* lst_cria (void) 
{
  return NULL;
}

/* Funcao de insercao: retorna lista atualizada com o novo elemento inserido. */
Lista* lst_insercao_inicio (Lista* l, int n)
{
  Lista* novo = (Lista*) malloc(sizeof(Lista));
  novo->prox = l;
  novo->info = n;

  return novo;
}


