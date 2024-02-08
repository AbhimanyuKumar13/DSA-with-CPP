#include<iostream>
using namespace std;

int main()
{
  int value,i;
  cout<<"Enter the value : ";
  cin>>value;
  for(i=value/2;i>=1;i--){
    if(value%i==0){
        cout<<i;
      break;
    }
  }
  return 0;
} 