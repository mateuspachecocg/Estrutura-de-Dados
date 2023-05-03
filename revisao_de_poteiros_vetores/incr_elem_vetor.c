#include <stdio.h>
#include <stdlib.h>
void incr_vetor(int n, int *v) {
  int i;
  for (i = 0; i < n; i++) {
    // v[i]++;
    // *(v+i) = *(v+i) + 1;
    (*(v+i))++;
  }
}

int main(void) {
  int *a = (int *) malloc(3*sizeof(int));
  *a = 1;
  *(a+1) = 3;
  *(a+2) = 5;
  incr_vetor(3, a);
  printf("%d %d %d", a[0], a[1], a[2]);

}
