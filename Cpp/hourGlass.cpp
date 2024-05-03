#include<iostream>
using namespace std;
int main() {
  int a;
  cout<<"Enter the size of hour glass : ";
  cin>>a;
  int space=0,i,j,k,row=a;

    // printing upper triangle
    for(i=0;i<(a+1)/2;i++) {
     for(j=1;j<=space;j++) {
      cout<<"  ";
     }
     for(;j<=row;j++) {
      cout<<"* ";
     }
     row--;
     space++;
     cout<<endl;
    }

  // updating variables
  row =3;

  // printing lower triangle
  for (int i = (a - 1) / 2 - 1; i >= 0; i--) {
    for (j = 0; j < i; j++) {
      cout << "  ";
    }
    for (j=0;j < row; j++) {
      cout << "* ";
    }
    row+=2;
    cout << endl;
  }
}
