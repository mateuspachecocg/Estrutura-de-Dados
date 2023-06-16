#include <stdio.h>
#include <stdlib.h>

#define N 5

void bubble_sort(int* array, int n);
void array_print(int* array, int n);
int main(void) 
{
  // Assume we have the following array:
  int array[N] = {2, 4, 1, 3, 5};
  printf("Array not sorted: \n");
  array_print(array, N);

  // Bubble sort the array
  bubble_sort(array, N);
  
  printf("Array sorted: \n");
  array_print(array, N);
}


void bubble_sort(int* array, int n) 
{
  int i, j, temp;
   for(i = 0; i < n; i++) {
    for (j = 0; j < n-i-1; j++) {
      if(array[j] > array[j+1]) {
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }   
}

void array_print(int* array, int n)
{
  int i;
  printf("{");
  for (i=0; i<n-1; i++)
    printf("%d, ", array[i]);

  printf("%d }\n", array[n-1]);

}
