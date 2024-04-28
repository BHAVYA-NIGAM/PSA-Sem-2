#include<stdio.h>
// Appr-1
// int main() { 
//   int arr[3][3]={1,2,3,4,5,6,7,8,9};
//   int i,j,row=3,col=3,n=3;
//   for(i=0;i<row;i++) {
//     for(j=0;j<col;j++) {
//       printf("%d ",arr[i][j]);
//     }
//     printf("\n");
//   }
//   for(i=0;i<n/2;i++) {
//     for(j=i;j<n-i-1;j++) {
//       int temp=arr[i][j];
//       arr[i][j]=arr[n-1-j][i];
//       arr[n-1-j][i]=arr[n-1-i][n-1-j];
//       arr[n-1-i][n-1-j]=arr[j][n-1-i];
//       arr[j][n-1-i]=temp;
//     }
//   }
//     printf("\n");
//    for(i=0;i<n;i++) {
//     for(j=0;j<n;j++) {
//       printf("%d ",arr[i][j]);
//     }
//     printf("\n");
//   }
// }
//Appr-2
// int main() {
//   int arr[3][3]={1,2,3,4,5,6,7,8,9},brr[3][3];
//   int i,j,n=3;
//   printf("Enter array : \n\t\t");
//   for(i=0;i<n;i++) {
//     for(j=0;j<n;j++) {
//       printf("%d ",arr[i][j]);
//     }
//     printf("\n\t\t");
//   }
//     printf("\n");
//   for(i=0;i<n;i++) { // transpose of a matrix
//     for(j=0;j<n;j++) {
//       brr[i][j]=arr[j][i];
//     }
//   }
//   for(i=0;i<n;i++) {
//     for(j=0;j<n/2;j++) {
//       int temp=brr[i][j];
//       brr[i][j]=brr[i][n-1-j];
//       brr[i][n-1-j]=temp;
//     }
//   }
//    printf("\nRotated Matrix : \n\t\t");
//   for(i=0;i<n;i++) {
//     for(j=0;j<n;j++) {
//       printf("%d ",brr[i][j]);
//     }
//     printf("\n\t\t");
//   }
// }

// Appr-3
void swap(int*a,int*b) {
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main() {
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  int i,j,n=3;
  printf("Enter array : \n\t\t");
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
      printf("%d ",arr[i][j]);
    }
    printf("\n\t\t");
  }
  printf("\n");
  for(i=0;i<n;i++) {
    for(j=0;j<i;j++) {
      swap(&arr[i][j],&arr[j][i]);
    }
  }
  for(i=0;i<n;i++) {
    for(j=0;j<n/2;j++) {
      swap(&arr[i][j],&arr[i][n-1-j]);
    }
  }
  printf("Rotated array : \n\t\t");
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
      printf("%d ",arr[i][j]);
    }
    printf("\n\t\t");
  }
  return 0;
}