#include <stdio.h>
// constante simbolica
#define N 10

int main(void) {
  int v[N];
  int mat[N][N];

  float m[4][3] = {{5.0, 10.0, 15.0},
                  {20.0, 25.0, 30.0},
                  {35.0, 40.0, 45.0}, 
                  {50.0, 55.0, 60.0}};
  printf("%.1f\n", *(m[1]+1));
 }
