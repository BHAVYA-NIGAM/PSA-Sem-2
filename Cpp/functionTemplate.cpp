#include<iostream>
using namespace std;
template <typename T>

void Swap(T &a,T &b);
int main() {
  int i=10;
  int j=20;
  cout<<"i , j = " << i << " , " << j << endl;
  cout<<"Using compiler genrated int swapper"<< endl;
  Swap(i,j);
  cout<<"Now, i , j = " << i << " , " << j << endl;
  
  double x=23.2;
  double y=19.1;
  cout<<"x , y = " << x << " , " << y << endl;
  cout<<"Using compiler genrated int swapper"<< endl;
  Swap(x,y);
  cout<<"Now, x , y = " << x << " , " << y << endl;
  return 0;
}

template <typename s>
void Swap(s &a, s &b) {
  s temp = a;
  a = b;
  b = temp;
}