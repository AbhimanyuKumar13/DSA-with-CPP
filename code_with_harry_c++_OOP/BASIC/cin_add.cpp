// two type of header file 1. user defined 2. system header file

#include<iostream> //system header file(library file)
// #include :(this.h) // this gives an error because we must have an this.h file in your system
using namespace std;

int main()
{
    int num_1,num_2; // we can not use reserved keyword for declearing variable name.eg. int,float etc.
    cout<<"enter 1st number :"; // this is call insertion operator
    cin>>num_1 ;                // this is call extraction operator
    cout<<"enter 2nd number :";
    cin>>num_2;
    cout<<"addition is :"<<num_1+num_2;
    return 0;
}