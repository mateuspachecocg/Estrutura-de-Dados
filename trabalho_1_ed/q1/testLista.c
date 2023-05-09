#include<stdio.h>
#include "lista.h"

/* Funcao para testar implementacao das funcoes durante o desenvolvimento */
void test_development();
/* Funcao requisitada no arquivo pdf do trabalho questao 1 */
void programa();


int main(void) {
 
  
  //programa();
  test_development();

  return 0;
}



void test_development() {
  Lista* l = lst_cria();
  l = lst_insere(l, 10);
  l = lst_insere(l, 20);
  l = lst_insere(l, 25);
  l = lst_insere(l, 30);
  l = lst_insere(l, 41);
  l = lst_insere(l, 53);
  l = lst_insere_fim_lista(l, 69);
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
  lt = lst_insere(lt, 25);
  lst_imprime(lst_inverte(lt));
  printf("As duas listas concatenadas\n");
  Lista* lcon = lst_conc(l, lt);
  lst_imprime(lcon);
  
  printf("\n\n\n");
  l = lst_diferenca(l, lt);
  lst_imprime(l);
}

void programa() {
  Lista* l1 = lst_cria();
 l1 = lst_insere(l1,6);
 l1 = lst_insere(l1,13);
 l1 = lst_insere(l1,45);
 l1 = lst_insere(l1,28);
 l1 = lst_insere(l1,41);
 l1 = lst_remove(l1,25);
 l1 = lst_remove_rec(l1,41);
 lst_imprime(l1);
 lst_imprime_invertida_rec(l1);
 printf("Num. nodes c/ info < que 30: %d\n",menores(l1,30));
 printf("O comprimento da lista eh %d\n",comprimento(l1));
 printf("Soma dos valores dos nodes %d\n",soma(l1)); 
 printf("Num. nodes com val. primos eh %d\n",primos(l1));
 Lista* l2 = lst_cria();
 l2 = lst_insere(l2,28);
 l2 = lst_insere(l2,45); 
 l2 = lst_insere(l2,130); 
 
 Lista* l3=lst_conc(l1,l2); 
 lst_imprime(l3);
 l1=lst_diferenca(l1,l2);
 lst_imprime(l1); 
 
 lst_libera(l1);
 lst_libera(l2); 
 lst_libera(l3);
}
