// Replace every element with the greated element present on the right side of the array and replace last element by -1
#include<iostream>
using namespace std;
void printArray(int arr[],int terms) {
  for(int i=0;i<terms;i++) {
    cout<<arr[i]<<" ";
  }
}
int main() { 
  // int terms; // use this to take input from user
  // cout<<"Enter the number of terms present in an array: "<<endl;
  // cin>>terms;
  // int arr[terms];
  // cout<<"Enter the array : "<<endl;
  // int i,max;
  // for(i=0;i<terms;i++) {
  //   cin>>arr[i];
  // } 
  // Use next two lines when you do not want to take input from the user
  int arr[5]={1,5,2,6,4};
  // int arr[5]={1,5,6,3,2};
  int terms=5,i,max;
  cout<<"Entered Array: "<<endl;
  printArray(arr,terms);
  cout<<"\n"<<endl;
  for(i=0;i<terms;i++) {
    max=arr[i+1];
    for(int j=i+1;j<terms;j++) {
      if(max<arr[j]) max=arr[j];
    }
    arr[i]=max;
  }
  arr[i-1]=-1;
  cout<<"Updated Array: "<<endl;
  printArray(arr,terms);
  return 0;
}