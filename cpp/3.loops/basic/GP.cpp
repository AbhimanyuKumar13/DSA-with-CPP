#include<iostream>
using namespace std;

int main()
{
  int n,i,temp;
  cout<<"Enter  the value of n : ";
  cin>>n;
  temp=3;
  for(i=1;i<=n;i++){
    cout<<temp<<" ";
    temp = temp*4;
  }
  return 0;
}