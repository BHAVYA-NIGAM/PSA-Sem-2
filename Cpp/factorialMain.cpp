#include<iostream>
#include"factorial.cpp"
using namespace std;

int main() {
  int num,i,fact=1;
  cout<<"Enter the number to find factorial: ";
  cin>>num;
  cout<<"Factorial of "<<num<<" is "<<factorial::fact(num)<<endl;
}