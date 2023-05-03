#include <stdio.h>
// constante simbolica
#define N 10

void incr_valor_matriz(){

}

int main(void) {

  float m[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

  

  printf("%.1f\n", *(m[1]+1));
 }
