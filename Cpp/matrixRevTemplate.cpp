#include<iostream>
using namespace std;

template <typename T, int size>
void reverseMatrix(T arr[size][size],T n) {
  for(int i=0;i<n/2;i++) {
    for(int j=0;j<n;j++) {
      T temp = arr[i][j];
      arr[i][j]=arr[n-i-1][j];
      arr[n-i-1][j]=temp;
    }
  }
}

template <typename T, int size>
void printMatrix(T arr[size][size],T n) {
  for(T i=0;i<n;i++) {
      for(T j=0;j<n;j++) {
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
}

int main() {
  int arr[3][3] = {1,2,3,4,5,6,7,8,9};
  cout<<"Original Matrix : "<<endl;
  printMatrix(arr,3);
  cout<<"Reverse Matrix : "<<endl;
  reverseMatrix(arr,3);
  printMatrix(arr,3);
}