#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
  // matriz com vetor de ponteiros
  int i, m, n;
  float **mat;
  
  m = 3;
  n = 4;


  mat = (float **) malloc(m*sizeof(float*));
  for (i=0;i < m;i++) {
    mat[i] = (float *) malloc(n*sizeof(float));
  }
 
  for (i=0; i<m; i++) {
    free(mat[i]);
  }

  free(mat);
  return -1;
 }
