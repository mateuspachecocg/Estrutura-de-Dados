/* Modulo para ilustrar utilizacao da fila */
#include<stdio.h>
#include "fila.h"

int main(void) 
{
  Fila* f = fila_cria();
  fila_insere(f, 20);
  fila_insere(f, 28);
  fila_insere(f, 22);
  fila_insere(f, 23);
  //printf("Primeiro elemento: %d\n", fila_remove(f));
  //printf("Primeiro elemento: %d\n", fila_remove(f));
  printf("Configuracao da fila: \n");
  printf("Quantidade de pares: %d\n", pares(f));
  fila_imprime(f);
  printf("A lista invertida: \n");
  fila_imprime(inverte(f));
  fila_libera(f);
  return 0;
} 
