#include<iostream>
#include"sum.cpp"
using namespace std;

int main() {
  int num_1,num_2;
  using Sum::a;
  using Sum::b;
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;
  cout<<"Sum of "<<a<<" and "<<b<<" is "<<Sum::sum()<<endl;
}