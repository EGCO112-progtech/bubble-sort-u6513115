#define N 6
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char* argv[]) {
  int a[N]={3,2,6,7,3,1};
  // int a[N]={1, 2, 3, 4, 5, 6};
  int i,j,new_number;


  display(a, N);
  bubbleSort(a, N); 
  display(a, N);

   //insertion(a,N);

  // selectionSort(a,N);
 return 0;
}


