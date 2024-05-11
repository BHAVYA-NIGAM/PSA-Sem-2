// static data memory
#include<iostream>
using namespace std;

class graph {
  static int count;
  int number;
  public:
  void getdata(int a) {
    number = a;
    count++;
  }
  void getcount(void) {
    cout<<"count ";
    cout<<count<<"\n";
  }
};

int graph:: count=10;
// defintion of static data number
// type and scope of each static number variable must be defined 
// outside class definition. This is necessary because the static member
// are stored seperately rather than as a part of an object Since they
// are associated with time class itselt rather than with any class 
// object, they are also know as class variables 
// The static variable count is initilized to zero when the object are treated
// some intital values are also assigned to the variable for instance 

int main() {
  graph a,b,c;
  
  a.getcount();
  b.getcount();
  c.getcount();

  a.getdata(10);
  b.getdata(100);
  c.getdata(1000);

  cout << "After reading data" << "\n";

  a.getcount();
  b.getcount();
  c.getcount();

  return 0;
}