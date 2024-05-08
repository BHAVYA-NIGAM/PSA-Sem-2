#include<iostream>
using namespace std;
 
int main() {
  int arr[4]={3,4,6,7};
  int i,j,k,count=0,term=4;

  for(i=0;i<term;i++) {
    for(j=i+1;j<term;j++) {
      for(k=j+1;k<term;k++) {
        if(((arr[i] + arr[j]) > arr[k]) && ((arr[i] + arr[k]) > arr[j]) && ((arr[j] + arr[k]) > arr[i])) {
          count++;
        }
      }
    }
  }
  cout << count;
}