#include<stdio.h>

int reverse(int [],int,int);

int main() {
  int arr[5]={3,4,5,1,2},term=5,i;
  printf("Array before reverse: ");
  for(i=0;i<5;i++) 
    printf("%d ",arr[i]);
  reverse(arr,0,term-1);
  printf("\nArray after reverse: ");
  for(i=0;i<5;i++) 
    printf("%d ",arr[i]);
  return 0;
}

int reverse(int arr[],int first, int last) {
  if(first>last) return 0;
  int temp = arr[last];
  arr[last]=arr[first];
  arr[first]=temp;
  reverse(arr,first+1,last-1);
}