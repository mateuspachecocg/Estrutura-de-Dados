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

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}


void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i=n-1; i>=0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
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
