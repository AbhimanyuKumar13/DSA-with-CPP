#include<iostream>
using namespace std;
// WAP to print the product of digits of agiven number.(no zero digit)
int main(){
    int n,multiply=1,lastdigit;
    cout<<"Enter number : ";
    cin>>n;
    while(n>0){
      lastdigit=n%10;
      multiply*=lastdigit;
      n=n/10;
      
    }
    cout<<multiply;
  return 0;
}