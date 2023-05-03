#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct ponto {
  float x;
  float y;
} Ponto;

float distancia(Ponto *pp1, Ponto *pp2) {
  return sqrt((pp1->x - pp2->x)*(pp1->x - pp2->x) + (pp1->y - pp2->y)*(pp1->y - pp2->y));
}

int main(void) {
  // calcular distancia entre os pontos (0,0) e (3, 4)
  //
  Ponto p1;
  Ponto p2;
  p1.x = 0; p1.y = 0;
  p2.x = 3; p2.y = 4;
  printf("%.1f\n", distancia(&p1, &p2));
}
