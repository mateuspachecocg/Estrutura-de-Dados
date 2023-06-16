#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sorting_algorithms.h"

void bubble_sort(int *array, int n)
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


void insertion_sort(int *array, int n)
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

void quick_sort(int *array, int start, int end)
{
   if(start < end) {
    int pIndex = partition(array, start, end);
    quick_sort(array, start, pIndex-1);
    quick_sort(array, pIndex+1, end);
  }
}

int partition(int *array, int start, int end)
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




/* Utility Functions */
void array_print(int *array, int n)
{
  int i;
  printf("{");
  for (i=0; i<n-1; i++)
    printf("%d, ", array[i]);
  printf("%d}\n", array[n-1]);
}

void swap(int *array, int i, int j)
{
 int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

int* create_rand_array(int n)
{
  srand(time(NULL));

  int* array = (int*) malloc(n*sizeof(int));

  for(int i = 0; i < n; i++) 
  {
    array[i] = rand() % n;  
  }

  return array;
}
