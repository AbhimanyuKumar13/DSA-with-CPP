#include<iostream>
using namespace std;

int main()
{
    // pointer ---> data type, which holds the address of other data type.

    int a=3;
    int* add1=&a;
    // & --> (address of) operator
    
    cout<<"the address of a is :"<<add1<<endl;
    cout<<"the address of a is :"<<&a<<endl;
    // address will be same.
    // * --> (value at) dereference operator
    cout<<"the value of a/address add1 is :"<<*add1<<endl;
    cout<<"the value of a/address add1 is :"<<a<<endl;
    
    // pointer to pointer
    int** add2 = &add1;

    cout<<"the address of add1 is :"<<&add1<<endl;
    cout<<"the address of add1 is :"<<add2<<endl;
    cout<<"the value at address add2 is:"<<*add2<<endl;
    cout<<"the value at address value_at (value_at(add2))is:"<<**add2<<endl;

    return 0;
}