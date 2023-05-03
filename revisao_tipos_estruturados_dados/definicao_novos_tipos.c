#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
};

typedef float Real;
typedef struct ponto Ponto;
typedef struct ponto *PPonto;

int main(void) {
  
  Real r = 10.5;
  Ponto p; p.x = 10.0;
  PPonto pp = &p;
  pp->y = r;
  printf("%.1f\n", pp->x);
  printf("%.1f\n", pp->y);
  return 0;
}
