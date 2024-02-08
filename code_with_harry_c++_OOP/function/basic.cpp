#include<iostream>
using namespace std;
 
//  function protoype
// type fxn-name(argument)


int sum(int a,int b); // ---->acceptable
//int sum(int,int); ----> acceptable
// int sum(int a, b); ----> not acceptable
int g();
// void g(); // ---> acceptable
// int g(void); // ---> acceptable
int main()
{
   int num1 , num2;
   cout<<"enter first number :\n"<<endl;
   cin>>num1;
   cout<<"enter second number :\n"<<endl;
   cin>>num2;
   // num1 and num2 are actual parameters
   cout<<"the sum is :"<<sum(num1, num2)<<endl;
   g();
   return 0;
}
int sum(int a, int b)
{
    //formal parameters a and b will be taking values from  actual parameters num1 and num2.
    int c = a+b;
    return c;
}

int g()
{
    cout<<"kya haal hai bhai";
}

 
    
