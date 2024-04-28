#include<iostream>
using namespace std;

namespace factorial {
  int fact(int num) {
  if(num == 1 || num==0)return 1;  
  return num*factorial::fact(num-1);
  }
};  