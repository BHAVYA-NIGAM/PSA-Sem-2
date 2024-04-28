#include<iostream>

void oil(int);

int main() {
  using namespace std;
  int taxes=31;
  int year=2021;
  cout<<"In main(), taxes = " << taxes << " , &taxes = ";
  cout<< &taxes << endl;
  cout<<"In main(), year = " << year << " , &years = ";
  cout<< &year << endl;
  oil(taxes);
  cout<<"In main(), taxes = " << taxes << " , &taxes = ";
  cout<< &taxes << endl;
  cout<<"In main(), year = " << year << " , &years = ";
  cout<< &year << endl;
  return 0;
}

void oil(int x) {
  using namespace std;
  int taxes = 5;
  cout<<"In oil(), taxes = " << taxes << " , &taxes = ";
  cout<< &taxes << endl;
  cout<<"In oil(), x = " << x << " , &x = ";
  cout<< &x << endl;
  { // start a block
    int taxes = 113;
    cout<<"In block(), taxes = " << taxes << " , &taxes = ";
    cout<< &taxes << endl;
    cout<<"In block(), x = " << x << " , &x = ";
    cout<< &x << endl;
  }
  cout<<"Post-block(), taxes = " << taxes << " , &taxes = ";
  cout<< &taxes << endl;
}