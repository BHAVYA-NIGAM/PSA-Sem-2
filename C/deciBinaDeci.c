#include<stdio.h>
#include<math.h>
int main() {
  int num;
  printf("Enter the num : ");
  scanf("%d",&num);
  int arr[100], org=num, i=0, j, sum=0, temp;

  // Change to Binary
  while(num>0) {
    if(num%2==0) {
      arr[i++]=0;
    } else {
      arr[i++]=1;
    }
    num/=2;
  }

  int terms=i;
  j=i-1;

  // Reverse the array
  for(i=0;i<terms/2;i++,j--) {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }

  // Print the binary form
  for(i=0;i<terms;i++) {
    printf("%d ",arr[i]);
  }

  // 1's Compliment
  for(i=0;i<terms;i++) {
    arr[i]==(arr[i] == 0) ? 1 : 0;
  }

  printf("\n");

  // Print the binary form
  for(i=0;i<terms;i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");

  // Print the number
  for(i=0;i<terms;i++) {
    if(arr[i]==1) {
      sum+=pow(2,i);
    }
  }
  printf("%d",sum);
}