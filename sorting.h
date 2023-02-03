// selection sort function module in C
#include <stdio.h>
void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void insertionSort(int x[], int n) {

  int j,i;

  for(j=1;j<n;j++)
    {
      int insert = x[j];
      for(i=j-1;i>=0;i--)
      {
        if(insert>x[i]) //nsert is max
          break;
        else
          x[i+1]=x[i]; //position x[i] forward
      }
      x[i+1] = insert;
      display(x,n);
      printf("\n");
    }

}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int a[], int n) {
  int i, j;
  int m = a[0]; // dec m is min
  int mi = 0;

  for (j = 0; j < n - 1; j++) {
    m = a[j];
    mi = j;
    printf("m = %d\n", m);
    printf("mi = %d\n", mi);
    for (i = j + 1; i < n; i++) {
      if (m > a[i])  //find real min
      //if (a[mi] > a[i])
      {
        m = a[i];
        mi = i;
      }
    }
    swap(&a[j], &a[mi]);
    printf("a[j] = %d\n", a[j]);
    printf("a[mi] = %d\n", a[mi]);
    display(a, n);
    printf("\n");
  }
}

void bubbleSort(int a[], int n) {

  // how may pair to compare?
  for (int i = 0; i < n - 1; i++) {
    int sorted;
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    if (sorted == 0)
      break;
  }
}

int Isprime(int x) {
  if (x == 1 || x == 0)
    return 0;
  for (int i = 2; i < x; i++) {
    if (x % i == 0)
      return 0;
  }
  return 1;
}