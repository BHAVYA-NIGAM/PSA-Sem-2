#include <iostream>
extern int apple; 
static int Spinach = 10; 
static int rose = 200; 
void remote_access(){
    using namespace std;
    cout << "remove_access() reports the following addresses:\n";
    cout << apple << "\t\t" << &apple << " = &apple ," << endl << Spinach << "\t\t" << &Spinach << " = &Spinach , "<< endl;
    cout << rose << "\t\t"<<&rose << "=&rose, " << endl;
}
