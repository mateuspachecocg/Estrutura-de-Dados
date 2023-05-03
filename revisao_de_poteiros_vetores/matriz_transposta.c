#include <stdlib.h>

// usando matriz de vetor simples
float* transposta(int m, int n, float* mat) {
  int i, j;
  float* trp;

  trp = (float*) malloc(m*n*sizeof(float));

  for(i=0;i<m;i++){
    for (j=0; j<n; j++) {
      trp[j*m+i] = mat[i*n+j];
    }
  }

  return trp;
}

// usando matriz de vetor de vetor

float** transpostav(int m, int n, float** mat) {
  int i, j;
  float** trp;

  trp = (float**) malloc(m*sizeof(float*));
  for ( i = 0; i < m; i++) {
    trp[i] = (float*) malloc(n*sizeof(float)); 
  }

  for ( i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      trp[j][i] = mat[i][j];
    }
  }
  
  return trp;
}
