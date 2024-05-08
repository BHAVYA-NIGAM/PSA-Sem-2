#include<iostream>
using namespace std;

int main() {
  int arr[6]={1,1,1,2,0,2},term=6;
  int brr[99]={0},i;
  for(i=0;i<term;i++) {
    brr[arr[i]]++;
  }

  cout << "Given array : ";
  for(i=0;i<term;i++) {
    cout << arr[i] << " ";
  }

  int max=0;
  for(i=1;i<99;i++) {
    if(brr[max] < brr[i]) {
      max=i;
    }
  }
  
  cout  << "Frequency of " << max << " (" << brr[max] << ") is highest in the given array.";
}