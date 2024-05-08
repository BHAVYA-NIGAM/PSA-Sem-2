// use of protected member in the c++

#include<iostream>
using namespace std;

class Base {
  protected: 
    int protectedVar;
  public: 
    Base(int value) : protectedVar(value) {}
    void printProtectedVar() const {
      cout << "Protected variable : " << protectedVar << endl;
    }
};

class Derived : public Base {
  public:
    Derived(int value) : Base(value) {}
    void modifyProtectedVar(int value) {
      protectedVar = value;
    }
};

int main() {
  Derived derivedObj(42);
  derivedObj.printProtectedVar();
  derivedObj.modifyProtectedVar(100);
  derivedObj.printProtectedVar();
  return 0;
}