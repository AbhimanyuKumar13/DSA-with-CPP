#include<iostream>
using namespace std;

int main()
{
    int a=6,b=2;
    // arithmetic operators
    cout<<"a+b is : "<<a+b<<endl;
    cout<<"a*b is : "<<a*b<<endl;
    cout<<"a/b is : "<<a/b<<endl;
    cout<<"a-b is : "<<a-b<<endl;
    cout<<"a%b is : "<<a%b<<endl;
    cout<<"a++ is : "<<a++<<endl;
    cout<<"++a is : "<<++a<<endl;
    cout<<"a-- is : "<<a--<<endl;
    cout<<"--a is : "<<--a<<endl;
    // assignment operator --> used to assign value to variable

    // int a=3, b=6;
    // char ch='a';

    // comparison operator
    cout<<"the value of a==b is : "<<(a==b)<<endl;
    cout<<"the value of a<=b is : "<<(a<=b)<<endl;
    cout<<"the value of a>=b is : "<<(a>=b)<<endl;
    cout<<"the value of a<b is : "<<(a<b)<<endl;
    cout<<"the value of a>b is : "<<(a>b)<<endl;
    cout<<"the value of a!=b is : "<<(a!=b)<<endl;

    // logical operator 
    // 1. and (&&)
    // 2. or (||)
    // 3. not (!)
    cout<<"the value of logical (&&) operator ((a==b)&&(a<b)) is :"<<((a==b)&&(a<b))<<endl;
    cout<<"the value of logical (||) operator ((a==b)||(a<b)) is :"<<((a==b)||(a<b))<<endl;
    cout<<"the value of logical (!) operator (!(a==b)&&(a<b)) is :"<<(!(a==b)&&(a<b))<<endl;

    // bit-wise operator will discuss in upcoming part.

    return 0;
}

//good practic
// 1. always enclose thing in double cort or parentheses ("").
