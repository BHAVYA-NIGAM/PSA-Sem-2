


#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int first,int mid,int last) {
  int i,j,k;
  int term1=mid-first+1;
  int term2=last-mid;
  int brr[term1],crr[term2];
  for(i=0;i<term1;i++) {
    brr[i]=arr[first+i];
  }
  for(i=0;i<term2;i++) {
    crr[i]=arr[mid+1+i];
  }
  i=0;
  j=0;
  k=first;
  while(i<term1 && j<term2) {
    if(brr[i]<=crr[j]) {
      arr[k++]=brr[i++];
    } else {
      arr[k++]=crr[j++];
    }
  }
  while(i<term1) {
    arr[k++]=brr[i++];
  }
  while(j<term2) {
    arr[k++]=crr[j++];
  }
}

void mergeSort(int arr[],int first,int last) {
  if(first<last) {
    int mid=first + (last-first)/2;
    mergeSort(arr,first,mid);
    mergeSort(arr,mid+1,last);
    merge(arr,first,mid,last);
  }
}

int main() {
  int terms;
  printf("Enter the number of terms present in an array: ");
  scanf("%d",&terms);
  int arr[terms];
  printf("Enter the array to sort : ");
  int i,first,last;
  for(i=0;i<terms;i++) {
    scanf("%d",&arr[i]);
  }
  first=0;
  last=terms-1;
  mergeSort(arr,first,last);
  for(i=0;i<terms;i++) {
    printf("%d ",arr[i]);
  }
  return 0;
}

