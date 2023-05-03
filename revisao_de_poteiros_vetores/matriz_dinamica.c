#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // matriz representada por um vetor simples
  int i, j;
  // Inicilializando a matriz 
  // mat[3][4] = [a b c d
  //              e f g h
  //              i j k l] 
  // Alocar dinanmicamente;
  int m = 3, n = 4;
  
  char *mat_din;

  mat_din = (char *) malloc(m*n*sizeof(char));


  char mat[12] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};
  printf("Linha: ");
  scanf("%d", &i);
  printf("Coluna: ");
  scanf("%d", &j);

  printf("%c\n", mat[i*4+j]);
 }
