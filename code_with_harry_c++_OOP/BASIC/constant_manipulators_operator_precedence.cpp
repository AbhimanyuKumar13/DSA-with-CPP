#include<iostream>
#include<iomanip> // for manipulator
using namespace std;

int main()
{
    // int a=20;
    // cout<<"the value of a was "<<a<<endl;
    // a=45;
    // cout<<"the value of a is "<<a<<endl;

    // ***********constants in c++************
    

    // const float pi=3.14; // declare of constant
    
    // cout<<"the value of pi was :"<<pi<<endl;
    // // pi=3.147; this will be genrate an error.
    // cout<<"the value of pi is :"<<pi<<endl;


//manipulators in c++

//     int a=10,b=100,c=1000;
     
//      cout<<"the value of a without setw is :"<<a<<endl;
//      cout<<"the value of b without setw is :"<<b<<endl;
//      cout<<"the value of c without setw is :"<<c<<endl;

//      cout<<"the value of a is :"<<setw(4)<<a<<endl;
//      cout<<"the value of b is :"<<setw(4)<<b<<endl;
//      cout<<"the value of c is :"<<setw(4)<<c<<endl;

// operator precedence
// who will execute first.

    int a=5,b=2;

    int c= ((((a*5)+b)-45)+45);
    cout<<c;
    
    return 0;
}