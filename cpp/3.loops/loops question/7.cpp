#include<iostream>
using namespace std;
//WAP to print the factorial of a given number.
int main(){
    int n,i;
    double  product=1;
    cout<<"Enter the number whose factorial you want find : ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
      product=product*i;
    }
    cout<<product;
  return 0;
}