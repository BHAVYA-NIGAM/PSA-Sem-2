#include<iostream>
using namespace std;

// Template for rotate function
template <typename T , int n>
void rotateMatrix(T arr[n][n], T terms , T rotate);

// Template for swap function
template <typename T>
void swap(T *a, T*b);

// Template for print function
template <typename T , int n>
void print(T arr[n][n], T terms);

int main() {
  int arr[3][3] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
  int i, j, rotate, n=3;
  cout << "Original Array : \n";
  print(arr , n);
  cout << "How many times you want to rotate the matrix : ";
  cin >> rotate;
  rotateMatrix(arr,n,rotate);
  cout << "Rotated Array : \n";
  print(arr , n);
}

template <typename T , int n>
void print(T arr[n][n], T terms) {
  for(int i=0;i<terms;i++) {
    for(int j=0;j<terms;j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

template <typename T>
void swap(T *a, T*b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

template <typename T, int n >
void rotateMatrix(T arr[n][n], T terms , T rotate) {
  rotate %=4;
  for (int times = 0 ; times < rotate ; times++) {
    for(int i=0; i<terms; i++) {
      for (int j = 0 ; j < i ; j++ ) {
        swap(arr[i][j] , arr[j][i]);
      }
    }
    for(int i=0; i<terms ;i++) {
      for(int j=0; j<terms/2 ;j++) {
        swap(arr[i][j] , arr[i][n-1-j]);
      }
    }
  }
}
