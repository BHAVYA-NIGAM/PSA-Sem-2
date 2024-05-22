// basic vector operation

#include<iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> num {100, 200, 300, 400, 500};
  cout<< "Intial vector  = ";
  for(const int &i : num) {
    cout<< i << " ";
  }

  // add the integers 6 and 7 to the vector
  num.push_back(600);
  num.push_back(700);
  
  cout << "\nUpdated Vector = ";
  for(const int &i : num) {
    cout<< i << " ";
  }

  cout << endl << "$ IMPORTANT FUNCTION PRESENT IN VECTOR" << endl;
  cout << "Size : " << num.size() << endl;
  cout << "Capacity : " << num.capacity() << endl;
  cout << "First element  : " << num.front() << endl;
  cout << "Last element : " << num.back() << endl;

  num.resize(10);

  cout << "After resize to 9, size is : " << num.size() << endl;
  cout << "Last element : " << num.back() << endl;
  
  // Insert at beginning
  num.insert(num.begin(), 50);
  cout << "After inserting at beginning, first element :  " << num.front() << endl;

  // Erase element
  num.erase(num.begin() + 2);
  cout << "After erase at index 1, size is :  " << num.size() << endl;

  // Clear
  num.clear() ;
  cout << "After clear, size is :  " << num.size() << endl;

  return 0;
}