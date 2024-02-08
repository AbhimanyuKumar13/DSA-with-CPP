#include<iostream>
using namespace std;

int main()
{
    // @@@@@@@@@@@@@@ FLOAT, DOUBLE,LONG_DOUBLE LITERALS  @@@@@@@@@@@@


    float d=34.5f;        // f for declear float
    long double e=34.5l;  // l for declear long double.

    cout<<"the value of d is :"<<d<<endl;
    cout<<"the value of e is :"<<e <<endl;

    cout<<"the size of 34.5 is :"<<sizeof(34.5)<<endl;
    cout<<"the size of 34.5f is :"<<sizeof(34.5f)<<endl;
    cout<<"the size of 34.5F is :"<<sizeof(34.5F)<<endl;
    cout<<"the size of 34.5L is :"<<sizeof(34.5L)<<endl;
    cout<<"the size of 34.5l is :"<<sizeof(34.5l)<<endl;

    //**************** reference variables *********************

    // Abhimanyu ---> Abhi ----> golu -----> ladla etc. 
    // means as a person can be call by many name, we can call a variable by many name when we use reference variable.

    // int x=45;
    // int  & y=x; //refering a variable 

    // cout<<x<<endl;
    // cout<<y<<endl;// output will be same.

    //****************type-casting***************

    // int a=45 ;
    // float b=40.55;

    // cout<<a<<endl;
    // cout<<b<<endl;
     
    // cout<<"type casted :"<<endl;
    // cout<<float(a)<<endl;
    // cout<<(float)a<<endl;
    // cout<<(int)b<<endl;
    // cout<<int(b)<<endl;

    // int c= int(b);
    // cout<<c<<endl;

    // cout<<"the expression is :"<<a+b<<endl; 
    // cout<<"the expression is :"<<a+int(b)<<endl; 
    // cout<<"the expression is :"<<a+(int)b<<endl; 

     return 0;
}