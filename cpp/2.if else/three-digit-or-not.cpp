#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter  the value of n :";
  cin>>n;
  if(n>=100 and n<=999){//&&
    cout<<"it's a three digit number";
  }
  else{
    cout<<"it's not a three digit number";
  }
  return 0;
}