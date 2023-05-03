#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
};

void captura(struct ponto *pp) {
  printf("Digite as coordenadas do ponto (x,y)\n:");
  scanf("%f %f", &pp->x, &pp->y);
}

void imprime(struct ponto *pp) {
    printf("Ponto (%.2f, %.2f): \n", pp->x, pp->y);
}
int main(void) {
  struct ponto p;

  captura(&p);
  imprime(&p);

  return 0;
}
