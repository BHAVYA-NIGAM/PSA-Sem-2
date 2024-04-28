#include <stdio.h>
void towerOfHanoi(int n,char a,char b,char c) {
  if(n==0)return;
  towerOfHanoi(n-1,a,c,b);
  printf("%c --- %c\n",a,c);
  towerOfHanoi(n-1,b,a,c);
  return;
}

int main() {
  int n;
  printf("Enter number of disks : ");
  scanf("%d",&n);
  towerOfHanoi(n,'A','B','C');
  return 0; 
}