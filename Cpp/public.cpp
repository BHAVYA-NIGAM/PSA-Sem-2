#include<iostream>
using namespace std;

// use of public member in c++
class Myclass {
  // private:
    int privateData;
  public:
    void setPrivateData(int data) {
      privateData=data;
    }
    int getPrivateData() {
      return privateData;
    }
};



int main() {
  Myclass obj;
  obj.setPrivateData(420000);

  cout << "Private data is: " << obj.getPrivateData() << endl;

  return 0;
}
