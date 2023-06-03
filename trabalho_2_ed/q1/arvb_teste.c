#include <stdio.h>
#include <stdlib.h>
#include "arvb.h"

int main(void) 
{
  ArvB* arv1 = arvb_cria_vazia();
  arv1=arvb_insere(arv1, 9);
  arv1=arvb_insere(arv1, 5);
  arv1=arvb_insere(arv1, 21);
  arv1=arvb_insere(arv1, 4);
  arv1=arvb_insere(arv1, 77);
  arv1=arvb_insere(arv1, 0);
  arv1=arvb_insere(arv1, 4);
  printf("Altura da arvore %d\n", arv_altura(arv1));
}
