#include<stdio.h>
int main() {
  int a[6]={16,18,3,4,5,2};
  int b[6]={0};
  int i=0,j,k=0;
  int max=a[i];
  for(i=1;i<6;i++) {
    int leader=1;
    for(j=i+1;j<6;j++) {
      if(a[i]<=a[j]) {
        leader=0;
        break;
      }
    }
    if(leader) {
      b[k++]=a[i];
    }
  }
  for(i=0;i<k;i++) {
    printf("%d ",b[i]);
  }
}