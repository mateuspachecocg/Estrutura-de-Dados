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

/* Remove um elemento de uma lista retornando a lista alterada */
Lista* lst_remove(Lista *l, int info) {
  if(l != NULL) {
    Lista* lAux = l->prox;
    if(l->info==info) {
      free(l);
      return lAux;
    } else {
      Lista* lAnt = l;
      while(lAux != NULL) {
        if(lAux->info == info) {
          lAnt->prox = lAux->prox;
          free(lAux);
          break;
        } else {
          lAnt = lAux;
          lAux = lAux->prox;
        }
      }
    }
  }
  return l;
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

/* Insere os elementos na lista de forma crescente */
Lista* lst_insere_ordenado(Lista *l, int info) {
  Lista *lNew = (Lista*) malloc(sizeof(Lista));
  lNew->info = info;
  if(l == NULL) {
    lNew->prox = NULL;
    return lNew;
  } else if (l->info >= info){
    lNew->prox = l;
    return lNew;
  } else {
    Lista* lAnt = l;
    Lista* lProx = l->prox;
    while(lProx != NULL && lProx->info < info) {
      lAnt = lProx;
      lProx = lProx->prox;
    }

    lAnt->prox = lNew;
    lNew->prox = lProx;
    return l;
  }
}

/* Funcao recursiva: imprimie os elementos da lista */
void lst_imprime_rec(Lista* l) {
  if(lst_vazia(l)) {
    return;
  } else {
    printf("info: %d\n", l->info);
    lst_imprime_rec(l->prox);
  }
}

/* Funcao recursiva: imprime a lista na ordem inversa */
void lst_imprime_invertida_rec(Lista *l) {
  if(lst_vazia(l)){
    return;
}else {
    lst_imprime_invertida_rec(l->prox);
    printf("info: %d\n", l->info);
    }
}

/* Funcao recursiva: remove os elementos da lista */
Lista* lst_remove_rec(Lista* l, int info) {
  if(!lst_vazia(l)) {
    if(l->info == info) {
      Lista* lAux = l;
      l = l->prox;
      free(lAux);
    } else {
      l->prox = lst_remove_rec(l->prox, info);
    }
  }
  return l;
}

/* Funcao recursiva: libera memoria ocupada pela lista */
void lst_libera_rec(Lista* l) {
  if(!lst_vazia(l)) {
    lst_libera_rec(l->prox);
    free(l);
  }
}

/* Funcao recursiva: que verifica se duas listas sao iguais */
int lst_igual_rec(Lista* l1, Lista* l2) {
  if(lst_vazia(l1) && lst_vazia(l2)) {
    return 1;
  } else if(lst_vazia(l1) || lst_vazia(l2)) {
    return 0;
  } else {
    return (l1->info == l2->info && lst_igual_rec(l1->prox, l2->prox));
  }
}

/* Retorna o numero de nodes de uma lista */
int comprimento(Lista* l) {
  if (lst_vazia(l)) {
    return 0;
  } else {
    int tam = 1;
    while (l->prox != NULL) {
      tam++;
      l = l->prox;
    }
    return tam;
  }
}

int menores(Lista* l, int n) {
  int menCount = 0;
  Lista* lAux = l;
  while(!lst_vazia(lAux)) {
    if(lAux->info < n) {
      menCount++;
    }
    lAux = lAux->prox;
  }
  return menCount;
}

int soma(Lista* l) {
  int soma = 0;
  Lista* lAux = l;
  while(!lst_vazia(lAux)) {
    soma += lAux->info;
    lAux = lAux->prox;
  }
  return soma;
}

int isPrime(int n) {
  int divs = 0;
  int i;
  for(i = 2; i <= n/2; i++) {
    if(n % i == 0) {
      divs++;
      break;
    }
  }

  return divs == 0;
}

int primos(Lista* l) {
  int primos = 0;
  Lista* lAux = l;
  while(!lst_vazia(lAux)) {
    if(isPrime(lAux->info))
      primos++;
    lAux = lAux->prox;
  }
  return primos;
}

Lista* lst_inverte(Lista* l) {
  Lista* lNew = lst_cria();
  Lista* lAux = l;
  while(lAux != NULL) {
    lNew = lst_insere(lNew, lAux->info);
    lAux = lAux->prox;
  }
  return lNew;
}

Lista* lst_conc(Lista* l1, Lista* l2) {
  Lista* lNew = lst_cria();
  lst_insere(lNew, 10);
  if(lst_vazia(l1) && lst_vazia(l2)) {
    return lNew;}
  else if(lst_vazia(l1) && !lst_vazia(l2)) {
    return l2;}
  else if(!lst_vazia(l1) && lst_vazia(l2)) {
    return l1;}
  else {
        int i = 0;
        Lista* lAux = lst_inverte(l2);
        for(; i < comprimento(l2); i++) {
          lNew = lst_insere(lNew, lAux->info);
          lAux = lAux->prox;
        }
        i = 0;
        lAux = lst_inverte(l1);
        for(; i < comprimento(l1); i++) {
          lNew = lst_insere(lNew, lAux->info);
          lAux = lAux->prox;
        }
        return lNew;
        }
}

Lista* lst_diferenca(Lista* l1, Lista* l2) {
  
  Lista* lAux = l2;
  while(!lst_vazia(lAux)) {
    l1 = lst_remove(l1, lAux->info);
    lAux = lAux->prox;
  }

  return l1;
}

Lista* lst_insere_fim_lista(Lista* l, int info)
{
  Lista* lNew = (Lista*) malloc(sizeof(Lista));
  lNew->info = info;
  lNew->prox = NULL;
  if(l==NULL) {
    return lNew;
  } else {
    Lista* lAux = l->prox;
    while(lAux->prox != NULL)
      lAux = lAux->prox;
    lAux->prox = lNew;
  }
  return l;
}

