#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  // int v[] = {5, 10, 15, 20, 25};
  int *v = (int *) malloc(5*sizeof(int));
  int a = 5, b = 10, c = 15, d = 20, e = 25;
  *(v+0) = a;
  *(v+1) = b;
  *(v+2) = c;
  *(v+3) = d;
  *(v+4) = e;
  scanf("%d", &n);
  printf("O vetor na %d  = %d\n", n, *(v+n-1));
}
