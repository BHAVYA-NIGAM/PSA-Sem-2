#include<stdio.h>
int main() {
  int arr[9]={1,2,4,5,6,7,8,9,10};
  int i,sum=0,arr_sum=0;
  for(i=1;i<=10;i++) {
    sum+=i;
  }
  for(i=0;i<9;i++) {
    arr_sum+=arr[i];
  }
  int missing_number=sum-arr_sum;
  printf("Missing Number: %d",missing_number);
  return 0;
}