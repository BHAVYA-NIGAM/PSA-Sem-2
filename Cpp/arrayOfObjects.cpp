// array of objects
#include<iostream>
using namespace std;

class employee {
  char name[10];
  int age;

  public:
  void getdata(void);
  void putdata(void);
};

void employee::getdata(void) {
  cout << "enter name : ";
  cin >> name;
  cout << "enter age : ";
  cin >> age;
}

void employee::putdata(void) {
  cout << "name : " <<  name << endl;
  cout << "age : " <<  age << endl;
}

const int term = 3;

int main() {
  employee manager[term];
  
  for(int i = 0; i<term;i++) {
    cout << "detail : " << i+1 << "\n";
    manager[i].getdata();
  }
  cout << "\n";
  for(int i = 0;i<term;i++) {
    cout<<"Manger  : " << i+1 << "\n";
    manager[i].putdata();
  }
  return 0;
}