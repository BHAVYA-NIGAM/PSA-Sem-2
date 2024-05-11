#include<iostream>
using namespace std;

class exam {
  int code;
  static int count;
public: 
  void setcode() {
    code = ++count;
  }
  void showcode(void) {
    cout << "object number : " << code << endl;
  }
  static void showcount(void) {
    cout << "count "<< count << "\n";
    // cout << "code "<< code << "\n";
  }
};

int exam::count;

int main() {
  exam t1,t2,t3;
  t1.setcode();
  t2.setcode();
  exam::showcount;
  t3.setcode();
  exam::showcount();
  t1.showcode();
  t2.showcode();
  t3.showcode();
  return 0;
}