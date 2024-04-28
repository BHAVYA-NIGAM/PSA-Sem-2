
#include<stdio.h>
int main() {
  // int arr[3][3]={1,2,3,4,5,6,7,8,9};
  int row,col;
  int i,j;
  printf("Enter the number of rows of an matrix: ");
  scanf("%d",&row);
  printf("Enter the number of column of an matrix: ");
  scanf("%d",&col);
  int arr[row][col];
  printf("Enter the elements of an matrix of %dx%d: ",row,col);
  for(i=0;i<row;i++) {
    for(j=0;j<col;j++) {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("The matrix is: \n");
  for(i=0;i<row;i++) {
    for(j=0;j<col;j++) {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  int min_row=0,max_row=row-1;
  int min_col=0,max_col=col-1;
  int count=0,totalElements=row*col;
  printf("Spiral Matrix: \n");

  while(count<totalElements) {
    for(i=min_col;i<=max_col;i++) {
      printf("%d ",arr[min_row][i]);
      count++;
    }
    if(count>=totalElements) break;
    min_row++;
    for(i=min_row;i<=max_row;i++) {
      printf("%d ",arr[i][max_col]);
      count++;
    }
    if(count>=totalElements) break;
    max_col--;
    for(i=max_col;i>=min_col;i--) {
      printf("%d ",arr[max_row][i]);
      count++;
    }
    if(count>=totalElements) break;
    max_row--;
    for(i=max_row;i>=min_row;i--) {
      printf("%d ",arr[i][min_col]);
      count++;
    }
    if(count>=totalElements) break;
    min_col++;
  }
}