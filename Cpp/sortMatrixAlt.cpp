#include<iostream>
#include<algorithm>
// #include<bits/stdc++.h> 
using namespace std;
// order of n^3
// time complexity
int main() {
  int arr[3][4]={9,8,5,6,8,5,2,4,2,3,5,6};
  int i,j,k;
  cout<<"Original Array : "<<endl;
  for(i=0;i<3;i++) {
    for(j=0;j<4;j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  for(i=0;i<3;i++) {
    if(i%2==0) {
      for(j=0;j<4;j++) {
        int max=j;
        for(k=j+1;k<4;k++) {
          if(arr[i][max]>arr[i][k])
            max=k;
        }
        swap(arr[i][max],arr[i][j]);  // library function
      }
    } else {
      for(j=0;j<4;j++) {
        int min=j;
        for(k=j+1;k<4;k++) {
          if(arr[i][min]<arr[i][k])
            min=k;
        }
        swap(arr[i][min],arr[i][j]); // library function
      }
    }
  }
  cout<<"Sorted Array : "<<endl;
  for(i=0;i<3;i++) {
    for(j=0;j<4;j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}