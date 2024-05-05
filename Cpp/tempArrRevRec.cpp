#include <iostream>
using namespace std;

template<typename T>
void rotateArray(T arr[], T first_index, T last_index, T time);

template<typename T>
void printArray(T arr[], T size);

int main() {
  int arr[5]={1, 2, 3, 4, 5};
  int term=5,k;

  cout << "Original Array : ";
  printArray(arr, term);

  cout << "\nEnter times you want to rotate the array : ";
  cin >> k;

  k%=term;
  
  rotateArray(arr , 0 , term , k);

  cout <<"\nRotated Array : ";
  printArray(arr, term);

  return 0;
}

template<typename T>
void printArray(T arr[], T size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

template<typename T>
void rotateArray(T arr[], T first_index, T last_index, T time) {
  if(time == 0) return;

  T value = arr[last_index - 1];

  for(int i = last_index - 2  ; i >= 0 ; i--) {
    arr[i+1] = arr[i];
  }
  arr[0] = value;

  rotateArray(arr, first_index, last_index , time - 1);
}