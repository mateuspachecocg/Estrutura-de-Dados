#include <stdio.h>
#include <stdlib.h>

#define N 5

void insertion_sort(int* array, int n);
void array_print(int* array, int n);
int main(void) 
{
  // Assume we have the following array:
  int array[N] = {2, 4, 1, 3, 5};
  printf("Array not sorted: \n");
  array_print(array, N);

  // insertion sort the array
  insertion_sort(array, N);
  
  printf("Array sorted: \n");
  array_print(array, N);
}


void insertion_sort(int* array, int n) 
{
  int i, value, hole;
  for (i=0; i<n-1; i++) {
    value = array[i];
    hole = i;
    while(hole > 0 && array[hole-1] > value) {
      array[hole] = array[hole-1];
      hole--;
    }
    array[hole] = value;
  }
}

void array_print(int* array, int n)
{
  int i;
  printf("{");
  for (i=0; i<n-1; i++)
    printf("%d, ", array[i]);

  printf("%d}\n", array[n-1]);

}
