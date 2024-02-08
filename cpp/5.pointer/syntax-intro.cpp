#include<iostream>
using namespace std;

// pointer : Pointers are symbolic representations of addresses,we can access the value of the variable whose address is in the pointer --> using dereference/* operator
// syntax :
// datatype *var_name;
// int *ptr;   // ptr can point to an address which holds int data

int main(){
    int x=5;
    int y=5;
    int* p=&x; // make a pointer p, which store address of x
    int* q=&y;  
    cout<<&x<<endl; // &x gives the address of the x, it can be change.
    cout<<&y<<endl<<endl;  
    cout<<p<<endl; //address printing
    cout<<q<<endl<<endl;
    cout<<&p<<endl; // address printing
    cout<<&q<<endl<<endl;
    cout<<*p<<endl; // data printing whose address in address p(dereference op.)
    cout<<*q<<endl;
  return 0;
}