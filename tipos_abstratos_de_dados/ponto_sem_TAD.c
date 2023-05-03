#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto {
  float x; float y;
} Ponto;

/* Prototipos das funcoes */
Ponto* pto_cria(float x, float y);
void pto_libera(Ponto *p);
void pto_acessa(Ponto *p, float *x, float *y);
void pto_atribui(Ponto *p, float x, float y);
float pto_distancia(Ponto *p1, Ponto *p2);

int main(void) {
  Ponto *p1 = pto_cria(2.0, 1.0);
  Ponto *p2 = pto_cria(3.4, 2.1);
  float d = pto_distancia(p1, p2);
  printf("Distancia entre pontos: %f\n", d);
  pto_libera(p1); pto_libera(p2);
  return 0;
}

Ponto* pto_cria(float x, float y) {
  Ponto* p = (Ponto*) malloc(sizeof(Ponto));
  if(p==NULL) {
    printf("Memoria Insuficiente\n");
    exit(1);
  }
  p->x = x; p->y = y;
  return p;
}

void pto_libera(Ponto *p) {
  free(p);
}

void pto_acessa(Ponto *p, float *x, float *y) {
  *x = p->x;
  *y = p->y;
}

void pto_atribui(Ponto *p, float x, float y) {
  p->x = x; p->y = y;
}

float pto_distancia(Ponto *p1, Ponto *p2) {
  float dx = (p1->x - p2->x)*(p1->x - p2->x);
  float dy = (p1->y - p2->y)*(p1->y - p2->y);
  return sqrt( dx*dx + dy*dy);
}




