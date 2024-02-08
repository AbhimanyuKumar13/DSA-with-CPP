#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<2)
    {
    return 1;
    }
    return fib(n-2) + fib(n-1);
}
// how its work 
// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)
int main()
{
    int a;
    cout<<"Enter the value of n :\n";
    cin>>a;
    cout<<"The term in fabonacci series at position "<<a<<" is :"<<fib(a)<<endl;
    
    return 0;
}