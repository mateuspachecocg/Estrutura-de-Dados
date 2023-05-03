 #include <stdio.h>
#include "circulo.h"

int main (void) {
  Ponto* q = pto_cria(1.4, 1.1);
  Circulo* c = circ_cria(0.0, 0.0, 3);
  
  int b = circ_interior(c, q); 
  char* boolean;
  if(b != 1) 
    boolean = "false";
  else 
    boolean = "true";
  printf("O ponto esta contido no circulo: %s \n", boolean);
  pto_libera(q);
  circ_libera(c);
  return 0;
}    
