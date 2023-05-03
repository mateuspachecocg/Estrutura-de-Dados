#include <stdio.h>
#include <stdlib.h>

float somatorio(int m, float v[]) {
  int i, s = 0.0F;
  for(i=0;i<m;i++) {
    s +=v[i];
  }
  return s;
}

int main(void) {
  int n, i;
  float *v, s;
  scanf("%d", &n);
  v = (float *) malloc(n*sizeof(float));
  if (v == NULL) {
    printf("Memoria Insuficiente!");
    exit(1);
  }
  for (i=0; i<n; i++) 
    scanf("%f", &v[i]);
  s = somatorio(n, v);
  printf("somatorio=%.1f, media=%.1f\n", s, s/n);
  free(v);
  return 0;
}
