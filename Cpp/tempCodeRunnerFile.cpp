#include<iostream>
int main() {
  int arr[9]={1,2,4,5,6,7,8,9,10};
  int i;
  for(i=0;i<9;i++) {
    if(arr[i]>arr[i+1]) {
      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
  }
  i=0;
  while(i<9) {
    if(arr[i]!=i+1) {
      printf("Missing Number: %d",i+1);
      break;
    }
  }
}