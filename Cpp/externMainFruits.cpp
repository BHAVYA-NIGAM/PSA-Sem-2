#include<iostream>
#include"externFruits.cpp"

int apple =3;
int spinach = 30;
static int rose =300;

void remote_access();
int main() {
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << apple << "\t\t"<< &apple <<endl << Spinach << "\t\t" << &Spinach << " =&Spinach";
    cout << rose << "\t\t"<< &rose << " = &rose \n";
    remote_access ();
    return 0;
}
