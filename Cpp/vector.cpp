#include<iostream>
#include<vector>
using namespace std;

int main() {
  // initialise lists
  vector<int> m = {11, 12, 13, 14, 15};
  // uniform initialisation
  vector<int> n {6, 7, 8, 9, 10};
  // method 3
  vector<int> o {5, 12};
  cout << "vector 1 = ";
  // range loop
  for(const int &i: m) {
    cout << i << "  ";
  };
  cout << "\nvector 2 = ";
  for(const int &i: n) {
    cout << i << "  ";
  }
  cout << "\nvector 3 = ";
  for(const int &i: o) {
    cout << i << "  ";
  }

  return 0;
}

// The line for const int & i : M is a range based for loop in cpp 
// This type of loop is used to iterate over element in a range
// such as those in a container like a vector, an array