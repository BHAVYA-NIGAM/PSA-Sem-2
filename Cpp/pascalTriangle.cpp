#include<iostream>
using namespace std;

int main() {
  int a ,i ,j ,num=0;
  cout << "Enter the rows of Pascal's triangle : ";
  cin >> a;

  for(i=1;i<=a;i++) {
    for(j = 1 ; j < (a-i+1) ; j++) {
      cout << "  ";
    }
    num=1;
    for(j = 1; j <= i ; j++) {
      cout << num << "   ";
      num=num * (i - j ) / j;
    }
    cout << endl;
  }
}