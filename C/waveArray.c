#include <stdio.h>

void printArray(int arr[],int terms) {
    for(int i=0;i<terms;i++) {
    printf("%d ",arr[i]);
  }

}
void swap(int* a,int* b) {
  int temp=*a;
  *a=*b;
  *b=temp;
}

int main() {
  int arr[7]={1,3,7,5,2,4,6};
  int i,j;

  printf("Original Array: ");
  printArray(arr,7);

  for(j=0;j<7-1;j++)
    for(i=0;i<7-1-j;i++) 
      if(arr[i]>arr[i+1]) 
        swap(&arr[i],&arr[i+1]);

  printf("\nSorted Array: ");
  printArray(arr,7);

  for(i=0;i<=7-2;i+=2) 
    swap(&arr[i],&arr[i+1]);

  printf("\nWave Array: ");
  printArray(arr,7);
}