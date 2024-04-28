#include <stdio.h>
#include <stdlib.h>
void printLeaders(int arr[],int size) { // From Stack method || Time Complexity-n
   int *SK=(int*)malloc(sizeof(int));
   int top=-1;
   SK[++top]=arr[size-1];
   for(int i=size-2;i>=0;i--) {
      if(arr[i]>SK[top])
      SK[++top]=arr[i];
   }
   while(top!=-1) {
      printf("%d ",SK[top--]);
   }
   free(SK);
}
int main() {
   int arr[] = {16, 18, 3, 4, 5, 2};
   int n = sizeof(arr) / sizeof(arr[0]);
   printLeaders(arr,n); 
   // int b[6] = {0}, k = 0,leader,a; // From loops || Time Complexity-n^2

   // for (int i = 0; i < n; i++) {
   //   leader = arr[i];
   //   a = 1;
   //   for (int j = i + 1; j < n; j++) {
   //    if (arr[j] > leader) {
   //    a = 0;
   //    break;
   //    }
   //   }
   //   if (a) {
   //    b[k++] = leader;
   //   }
   // }
   // printf("leaders: ");
   // for (int i = 0; i < k; i++) {
   //   printf("%d ", b[i]);
   // }
   return 0;
}
