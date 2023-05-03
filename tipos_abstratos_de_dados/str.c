int comprimento(char* str) {
  int i;
  int n = 0;
  for (i=0; str[i] != '\0'; i++) 
    n++;  
  return n;
}

void copia(char* dest, char* orig) {
  int i;
  for (i=0; orig[i] != '\0'; i++) {
  dest[i] = orig[i];
  }
  dest[i] = '\0';
}

void concatena(char* dest, char* orig) {
  int i = 0;
  int j;

  i = 0;
  while(dest[i] != '\0')
    i++;

  for (j=0; orig[j] != '\0'; j++) {
    dest[i] = orig[j];
    i++; 
  }

  dest[i] = '\0';
}
