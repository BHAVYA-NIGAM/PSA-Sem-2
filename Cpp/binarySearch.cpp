#include<iostream>
// #include<bits/stdc++.h>
int main() {
  using namespace std;
  int terms;
  cout<<"Enter the number of elements in array for binary search: ";
  cin>>terms;
  int arr[terms],i;
  cout<<"Enter a sorted array for binary search: ";
  for(i=0;i<terms;i++) {
    cin>>arr[i];
  }
  int find;
  cout<<"Enter the value you want to find in the given array: ";
  cin>>find;
  int first=0,last=terms-1,mid;
  while(first<=last) {
    mid=first+(last-first)/2;
    if(arr[mid]>find) {
      last=mid-1;
      continue;
    } else if(arr[mid]==find) {
      cout<<"The value "<<find<<" is found at "<<mid+1<<" position"<<endl;
      break;
    } else if (arr[mid]<find) {
      first=mid+1;
      continue;
    }
  }
  if(first>last) {
    cout<<"Error: Value not found in the array"<<endl;
  }
}