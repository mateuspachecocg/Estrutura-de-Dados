#include<stdio.h>
#include "lista.h"

int main(void) {
  Lista* l = lst_cria();
  l = lst_insere(l, 10);
  l = lst_insere(l, 20);
  l = lst_insere(l, 25);
  l = lst_insere(l, 30);
  l = lst_insere(l, 41);
  l = lst_insere(l, 53);
  l = lst_remove(l, 10);
  lst_imprime(l);
  printf("O tamanho da lista: %d\n", comprimento(l));
  printf("Numero de elementos menores  q %d: %d\n", 30, menores(l, 30));
  printf("Soma: %d\n",  soma(l));
  printf("Primos: %d\n",  primos(l));
  
  Lista* lt = lst_cria();
  lt = lst_insere(lt, 99);
  lt = lst_insere(lt,77);
  lt = lst_insere(lt, 33);
  lst_imprime(lst_inverte(lt));
  printf("As duas listas concatenadas\n");
  Lista* lcon = lst_conc(l, lt);
  lst_imprime(lcon);

  return 0;
}
