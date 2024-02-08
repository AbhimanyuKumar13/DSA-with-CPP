#include<iostream>
using namespace std;

int a=10;         //global variable
float abhi=3.24; //global variable

int main()
{
    int a=2;           // local variable
    a=13;             // local variable
    float ram=3.55;
    char ch='@';
    bool is_true =true;

    cout<<a<<endl;
    cout<<::a<<endl; // :: scope resolution operator used to call global variable. 

    cout<<ram<<endl;
    cout<<is_true<<endl;
    cout<<ch<<endl;
      
    cout<<abhi;// because there is no local variable with name abhi so we can directly call them 
    // good practice: always declear scope resolution operator
    return 0;
}
// conclusion///here the precedence of local variable is more than global variable