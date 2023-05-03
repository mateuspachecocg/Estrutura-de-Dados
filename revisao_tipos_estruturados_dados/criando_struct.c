#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
};

void imprime(struct ponto p) {
  printf("Ponto (%.2f, %.2f): \n", p.x, p.y);
}
int main(void) {
  struct ponto p;
  printf("Digite as coordenadas do ponto(x,y): \n");
  scanf("%f %f", &p.x, &p.y);
  imprime(p);
  return 0;
}
