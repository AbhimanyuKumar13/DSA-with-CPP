#include<iostream>
using namespace std;

// inline int product(int a,int b) // make only short fxn to inline 
// {
//     return a*b;
// }
inline int product(int a,int b)
{ 
    // not recommended to use below lines with inline fxn.
    // static int c=0; // this executes only once
    // c=c+1;          // next time fxn is run, the value of c will be changed.
    return a*b;
}

float money_rec(int currmoney, float factor=1.04)// write default argument first then write compalsary fxn.
{
    return currmoney * factor;
}
// int strlen(const char *p)
// {

// }

int main()
{
    // int a,b;
    // cout<<"Enter the value of a and b :\n";
    // cin>>a>>b;
    // cout<<"Th product of a and b is :"<<product(a,b)<<endl; 

    int money=1000;

    cout<<"if you have "<<money<<" Rs in your bank account , you will recive "<<money_rec(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP : if you have"<<money<<" Rs in your bank account , you will recive "<<money_rec(money, 1.1)<<" Rs after 1 year"<<endl;

    return 0;
}