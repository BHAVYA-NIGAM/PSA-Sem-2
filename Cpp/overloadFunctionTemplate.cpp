#include<iostream>
using namespace std;

template <typename T>
void Swap(T &a,T &b);

template <typename T>
void Swap(T *a,T *b,int n);

void Show(int a[]);
const int Lim=6;

int main() {
  int i=10,j=20;
  cout<<"i , j = " << i << " , " << j << endl;
  cout<<"Using compiler genrated int swapper"<< endl;
  Swap(i,j);
  cout<<"i , j = " << i << " , " << j << endl;

  int d1[Lim] = {0,7,0,4,1,7};
  int d2[Lim] = {0,7,2,0,1,9};
  cout<<"Original Array : "<< endl;
  for(i=0;i<Lim;i++) 
    cout<<d1[i]<< " ";
  cout<<endl;
  for(i=0;i<Lim;i++) 
    cout<<d2[i]<< " ";
  cout<<endl;
  cout<<"Using compiler genrated int swapper"<< endl;
  Swap(d1,d2);
  cout<<"Updated Array : "<< endl;
  for(i=0;i<Lim;i++) 
    cout<<d1[i]<< " ";
  cout<<endl;
  for(i=0;i<Lim;i++) 
    cout<<d2[i]<< " ";
  cout<<endl;
}


template <typename T>
void Swap(T &a, T &b) {
  T temp;
  temp = a;
  a=b;
  b=temp;
}

template <typename T>
void Swap(T a[], T b[],int n) {
  T temp;
  for (int i=0;i<n;i++) {
    temp =a[i];
    a[i]=b[i];
    b[i]=temp;
  }
}