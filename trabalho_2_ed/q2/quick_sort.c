#include <stdio.h>
#include <stdlib.h>

#define N 5

void quick_sort(int* array, int start, int end);
void array_print(int* array, int n);
int partition(int* array, int start, int end);
void swap(int* array, int i, int j);

int main(void) 
{
  // Assume we have the following array:
  int array[N] = {2, 4, 1, 3, 5};
  printf("Array not sorted: \n");
  array_print(array, N);

  // Bubble sort the array
  quick_sort(array, 0, N-1);
  
  printf("Array sorted: \n");
  array_print(array, N);
}


void swap(int* array, int i, int j) 
{
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

int partition(int* array, int start, int end) 
{
  int temp;
  int pivot = array[end];
  int pIndex = start;
  for (int i=start; i<end-1; i++) {
    if(array[i] <= pivot) {
      swap(array, i, pIndex);
      pIndex++;
    }
  }
  swap(array, pIndex, end);
  return pIndex;
}

void quick_sort(int* array, int start, int end) 
{
  if(start < end) {
    int pIndex = partition(array, start, end);
    quick_sort(array, start, pIndex-1);
    quick_sort(array, pIndex+1, end);
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
