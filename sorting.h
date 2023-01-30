// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
  display(data,length);
     
	
} 



void insertion(int a[],int n){


}

void swap(int *a,int *b)
{
  int temp
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

  int i,j;
  // how may pair to compare?

  for(i=0;i<n-1;i++)
  {
    int sorted = 1;
    printf("Round %d\n", i+1);
    for(j=0;j<n - i - 1;j++)
    {
      if(a[j]>a[j+1])
      {
        swap(&a[j],&a[j + 1]);
        sorted = 0;
      }
      display(a, n);
    }
    printf("\n");
    if (sorted) break;
  }
}

int Isprime(int x)
{
  if (x == 0 || x == 1) return 0;
  for (int i = 2; i < x; i++)
  {
    if (x % i == 0) return 0;
  }
  return 1;
}

