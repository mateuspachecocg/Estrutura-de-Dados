#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main (void) {
  Lista* l;
  l = lst_cria(); 
  l = lst_insercao_inicio(l, 23);
  l = lst_insercao_inicio(l, 45);
  printf("%d", l->info);
  return 0;
}
