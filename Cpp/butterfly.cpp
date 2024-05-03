#include<iostream>
using namespace std;
int main() {
  int a;
  cout<<"Enter the size of butterfly : ";
  cin>>a;
  int space=0,i,j,k,row=a,star=1,count=0;
    cout<<"\t";
    // printing upper body
    for(i=0;i<(a+1)/2;i++) {
      count=0;
      for(j=0;j<star;j++) {
        cout<<"* ";
        count++;
      }
     for(j=0;j<a-2*star;j++) {
      cout<<"  ";
      count++;
     }
     for(j=0;j<star;j++,count++) {
        if(count==a) {
          break;
        }
        cout<<"* ";
     }
      star++;
     cout<<endl<<"\t";
    }

    // updating variables
    star =a/2;

    // printing lower body
  for(i=0;i<a/2;i++) {
      count=a;
      for(j=0;j<star;j++) {
        cout<<"* ";
        count--;
      }
     for(j=0;j<a-2*star;j++) {
      cout<<"  ";
      count--;
     }
     for(j=0;j<star;j++,count--) {
        if(count==0) {
          break;
        }
        cout<<"* ";
     }
      star--;
     cout<<endl<<"\t";
    }
}
