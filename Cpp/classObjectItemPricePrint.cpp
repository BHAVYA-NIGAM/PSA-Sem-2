// Write a program in C++ using class and object to store price list of 3 items and print the largest price as well as the sum of all prices.

#include<iostream>
using namespace std;

class items {
  char itemName[10];
  int price;

  public:
  void getData(void);
  void putData(void);
  int getPrice(void);
};

int items::getPrice(void) {
  return price;
}

void items::getData(void) {
  cout << "enter item name : ";
  cin >> itemName;
  cout << "enter price : ";
  cin >> price;
}

void items::putData(void) {
  cout << "item name : " <<  itemName << endl;
  cout << "price : " <<  price << endl;
}

const int size = 3 ;

int main () {
  int sum=0,max=0;
  items products[3];
  for(int i = 0; i<3;i++) {
    cout << "Item : " << i+1 << "\n";
    products[i].getData();
    sum+=products[i].getPrice();
  }
  cout << "\n";
  for(int i = 0;i<3;i++) {
    if(products[max].getPrice() < products[i].getPrice() ) {
      max = i;
    }
  }
    cout<<"Sum of prices of all products : " << sum<< "\n";
    cout<<"Highest price of all products : " << products[max].getPrice() << "\n";
  
}