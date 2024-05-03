#include<iostream>
using namespace std;

int main() {
  int a;
  cout<<"Enter the size of right triangle : ";
  cin>>a;
  int i,j=1;
  for(i=1;i<=a;i++) {
    for(j=1;j<=i;j++) {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}