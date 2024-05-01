#include<iostream>
using namespace std;
void sort_asc(int arr[],int first_index, int last_index) {
  for(int i = last_index-1; i >= first_index;i--) {
    for(int j=last_index-i-1;j>=first_index;j--) {
      if(arr[j-1] > arr[j]) {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1]=temp;
      }
    }
  }
}

void sort_desc(int arr[],int first_index, int last_index) {
  for(int i = last_index-1; i >= first_index;i--) {
    for(int j=last_index-i-1;j>=first_index;j--) {
      if(arr[j-1] < arr[j]) {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1]=temp;
      }
    }
  }
}

int main() {
  int term;
  cout<<"Enter the number of elements : ";
  cin>>term;
  int arr[term],i;
  cout<<"Enter the values of array : ";
  for(i=0;i<term;i++) {
    cin>>arr[i];
  }
  int k,j;
  cout<<"Enter the position : "; // Get position value till which the array we be sorted in ascending order and rest of the array will be sorted in descending order
  cin>>k;
  // for(i=0;i<k;i++) {
  //   int min=i;
  //   for(j=i+1;j<k;j++) {
  //     if(arr[min]>arr[j]) {
  //       min=j;
  //     }
  //   }
    // int temp=arr[min];
    // arr[min]=arr[i];
    // arr[i]=temp;
    sort_asc(arr,0,k);
  // }
  // for(i=k;i<term;i++) {
  //   int max=i;
  //   for(j=i+1;j<term;j++) {
  //     if(arr[max]<arr[j]) {
  //       max=j;
  //     }
  //   }
  //   int temp=arr[max];
  //   arr[max]=arr[i];
  //   arr[i]=temp;
  // }
  sort_desc(arr,k,term);
  for(i=0;i<term;i++) {
    cout<<arr[i]<< " ";
  }
}