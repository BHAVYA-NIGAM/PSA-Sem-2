#include<iostream>
using namespace std;

int main() {
  int length,breadth;
  cout<<"Enter the length and breadth of reactangle : ";
  cin>>length;
  cin>>breadth;
  
  int i,j;
  
  for(i=0;i<length;i++) {
    cout<<"* ";
  }
  cout<<endl;
  for(i=1;i<breadth-1;i++) {
    cout<<"*";
    for(j=1;j<2*length-2;j++) {
      cout<<" ";
    }
    cout<<"*";
  cout<<endl;
  }
  for(i=0;i<length;i++) {
    cout<<"* " ;
  }
  cout<<endl;
}