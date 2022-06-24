#include <stdio.h>

#define SIZE 5

void odd_only(void);

void copy_array(void);

int main(void) {
  odd_only();
  return 0;
}

void odd_only(void) {
  //create array with 5 elements
  int array[SIZE] = {1,2,3,4,5};
  int i = 0;
  while (i < SIZE ) {
  if (array[i] % 2 == 0) {
      array[i] = array[i] + 1;
  }
    printf("%d\n",   array[i]);
    i++;
  } 
  
}

void copy_array(void) {
  double array1[3] = {1.1,2.2, 3.3};
  double array2[100] = {0};
  int i = 0;
  while (i < 3) {
    array2[i] = array1[i];
    i++;
  }
  
}
