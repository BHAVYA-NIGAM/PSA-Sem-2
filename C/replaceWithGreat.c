// Replace every element with the greated element present on the right side of the array and replace last element by -1
#include<stdio.h>
void printArray(int arr[],int terms) {
  for(int i=0;i<terms;i++) {
    printf("%d ",arr[i]);
  }
}
int main() {
  // int terms; // use this to take input from user
  // printf("Enter the number of terms present in an array: ");
  // scanf("%d",&terms);
  // int arr[terms];
  // printf("Enter the array : ");
  // int i;
  // for(i=0;i<terms;i++) {
  //   scanf("%d",&arr[i]);
  // }
  int arr[5]={1,5,6,3,2};
  int terms=5,i,max;
  printf("Entered Array: ");
  printArray(arr,terms);
  printf("\n");
  for(i=0;i<terms;i++) {
    max=arr[i+1];
    for(int j=i+1;j<terms;j++) {
      if(max<arr[j]) max=arr[j];
    }
    arr[i]=max;
  }
  arr[i-1]=-1;
  printf("Updated Array: ");
  printArray(arr,terms);
  return 0;
}