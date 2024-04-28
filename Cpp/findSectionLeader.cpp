#include<iostream>
using namespace std;

// Find leader of the section of the array

namespace leader {
  void section(int arr[],int terms) {
    int brr[terms],k=0;
    if(terms==1)
      cout<<"Leader: "<<arr[0]<<endl;
    int i,j;
    for(i=0;i<terms;i++) {
      int isLeader=1;
      int max=arr[i];
      for(j=i+1;j<terms;j++) {
        if(max<arr[j]) {
          isLeader=0;
          break;
        }
      }
      if(isLeader) {
        brr[k++]=max;
      }
    }
    cout<<"Leaders: ";
    for(i=0;i<k;i++) {
      cout<<brr[i]<<" ";
    }
  }
}

int main() {
  int terms,i;
  cout<<"Enter the number of elements in the array: ";
  cin>>terms;
  int arr[terms];
  cout<<"Enter the elements of the array: ";
  for(i=0;i<terms;i++) 
    cin>>arr[i];
  leader::section(arr,terms);
}