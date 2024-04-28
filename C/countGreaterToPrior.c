#include<stdio.h>
int main() {
  int terms,i,count=1,j;
  printf("Enter number of elements in the array: ");
  scanf("%d",&terms);
  int arr[terms];
  printf("Enter elements in the array: ");
  for(i=0;i<terms;i++) {
    scanf("%d",&arr[i]);
  }
  int greater;
  for(i=1;i<terms;i++) {
    int max=arr[i];
    greater=1;
    for(j=0;j<i;j++) {
      if(max<=arr[j]) {
        greater=0;
        break;
      }
    }
    if(greater) count++;
  }
  printf("%d",count);
  return 0;
}