#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"

#define MAX 6

typedef struct pilha {
  int n;
  int v[MAX];
} Pilha;

Pilha* pilha_cria(){
  Pilha* p = (Pilha*) malloc(sizeof(Pilha));
  if(p == NULL) {
    printf("Memoria Insuficiente!!!\n");
    exit(1);
  }
  p->n = 0;
  return p;
}

void pilha_push(Pilha* p, int info) {
  if(p->n == MAX) {
    printf("Capacidade da Pilha Estorou!!!\n");
    exit(1);
  }
  p->v[p->n] = info;
  p->n = p->n + 1;
}

void pilha_imprime(Pilha* p) {
  int i;
  for(i = p->n - 1;i >= 0; i--) {
    printf("%d\n", p->v[i]);
  }
}

void pilha_libera(Pilha* p) {
  free(p);
}

int pilha_vazia(Pilha* p) {
  return p->n == 0;
}

int pilha_pop(Pilha *p) {
  int a;
  if(pilha_vazia(p)) {
    printf("PIlha Vazia!!!\n");
    exit(1);
  }
  a = p->v[p->n-1];
  p->n--;
  return a;
}

int topo(Pilha* p) {
  int a = pilha_pop(p);
  pilha_push(p, a);
  return a;
}

int impares(Pilha* p) {
  int impares = 0;
  if(pilha_vazia(p)){
    printf("Pilha Vazia\n");
  }
  int i;
  for(i = p->n-1;i >= 0; i--) {
    if(p->v[i] % 2 != 0)
      impares++;
  }
  return impares;
}

void pilha_push_ordenado(Pilha* p, int info) {
   if(p->n == MAX) {
    printf("Capacidade da Pilha Estorou!!!\n");
    exit(1);
  }

  if(p->v[p->n-1] > info) {
    p->v[p->n] = info;
    p->n = p->n + 1;
  } else {
    int aux = p->v[p->n-1];
    p->v[p->n-1] = info;
    p->v[p->n] = aux;
    p->n = p->n + 1;
  }
}

Pilha* empilha_pares(Pilha* p1, Pilha* p2) {
  if(pilha_vazia(p2)){
    printf("Pilha Vazia\n");
  }
  int i;
  int controle = 1;
  for(i = p1->n-1;i >= 0; i--) {
    if(p1->v[i] % 2 == 0) {
      if(controle == 1) {
        pilha_push(p2, p1->v[i]);
        controle = 0;
      } else {
      pilha_push_ordenado(p2, p1->v[i]);}
    }
  }
  return p2;
}
