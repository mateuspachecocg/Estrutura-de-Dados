#include<stdio.h>
#include<stdlib.h>
#include "arvb.h"

struct arvb {
  int info;
  ArvB* esq;
  ArvB* dir;
};

ArvB* arvb_cria_vazia()
{
  return NULL;
}

int arvb_vazia(ArvB* a) 
{
  return a == NULL;
}

ArvB* arvb_busca(ArvB* a, int c)
{
  if(arvb_vazia(a))
    return NULL;
  else if(a->info < c)
      return arvb_busca(a->dir, c);
  else if(a->info > c)
    return arvb_busca(a->esq, c);
  else // a->info == c
    return a;
}

// Usando a ordem simetrica
void arvb_imprime(ArvB *a)
{
  if(!arvb_vazia(a)){
    arvb_imprime(a->esq);
    printf(" %d ", a->info);
    arvb_imprime(a->dir);
  }
}

ArvB* arvb_insere(ArvB* a, int c)
{
  if(arvb_vazia(a)){
    a = (ArvB*) malloc(sizeof(ArvB));
    a->info = c;
    a->esq = NULL;
    a->dir = NULL;
  } else if(a->info > c) 
    a->esq = arvb_insere(a->esq, c);
  else if(a->info < c) 
    a->dir = arvb_insere(a->dir, c);
  else 
    printf("Elemento ja pertence a Arvore\n");
  return a;
}

ArvB* arvb_remove(ArvB* a, int c) {
  if(!arvb_vazia(a)){
    if(a->info > c)
      a->esq = arvb_remove(a->esq, c);
    else if(a->info < c)
      a->dir = arvb_remove(a->dir, c);
    else {
          ArvB* t;
          if(a->esq == NULL) {
            t = a, a = a->dir;
            free(t);
          } else if(a->dir == NULL) {
            t = a; a = a->esq;
            free(t);
          } else {
            t = a->esq;
            while(t->dir!=NULL) 
              t = t->dir;
            a->info = t->info; t->info = c;
            a->esq = arvb_remove(a->esq, c);
          }
        }
  }
  return a;
}

int arvb_altura(ArvB *a) 
{
  if(arvb_vazia(a))
    return -1;
  else {
      int hSAE = arvb_altura(a->esq);
      int hSAD = arvb_altura(a->dir);
      if(hSAE > hSAD)
        return 1+hSAE;
      else
        return 1+hSAD;
    }
}

void arvb_libera(ArvB* a)
{
  if(!arvb_vazia(a)){
    arvb_libera(a->esq);
    arvb_libera(a->dir);
    free(a);
  }
}

// Funcao para verifcar se um numero eh primo
int is_primo(int c) {
  if(c < 2)
    return 0;
  else {
    int i;
    for(i=1; i < c/2; i++)
    if(c%i == 0) return 0;
      return 1;
  }
 } 

int folhas_primos(ArvB *a)
{
  if(arvb_vazia(a))
    return 0;
  else {
      int pSAE = folhas_primos(a->esq);
      int pSAD = folhas_primos(a->dir);

      if(is_primo(a->info) && a->esq==NULL && a->dir==NULL) {
        return pSAE+pSAD+1;
      }else
        return pSAE+pSAD;
    }
}

int dois_filhos(ArvB* a)
{
  if(arvb_vazia(a))
    return 0;
  else {
      int m2SAE = dois_filhos(a->esq);
      int m2SAD = dois_filhos(a->dir);
      
      if(!arvb_vazia(a->esq) && !arvb_vazia(a->dir))
        return 1+m2SAE+m2SAD;
      else 
        return m2SAE+m2SAD;
    }
}

int nos_igual_altura(ArvB* a)
{
  if(arvb_vazia(a))
    return 0;
  else {
      int cSAE = nos_igual_altura(a->esq);
      int cSAD = nos_igual_altura(a->dir);

      if(!arvb_vazia(a->esq) && !arvb_vazia(a->dir))
        return 1+cSAE+cSAD;
      else
        return cSAE+cSAD;

    }
}

int iguais(ArvB* a, ArvB* b)
{
  if(arvb_vazia(a) && arvb_vazia(b))
    return 1;
  else if(arvb_altura(a) != arvb_altura(b))
    return 0;
  else {
    if(a->info!=b->info)
       return 0;
    else 
      return iguais(a->esq, b->esq) && iguais(a->dir, b->dir);
  }
}


