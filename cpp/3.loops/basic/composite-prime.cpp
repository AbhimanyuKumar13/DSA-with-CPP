#include<iostream>
using namespace std;

int main()
{
  int n,i;
  cout<<"Enter the value of n : ";
  cin>>n;
   if(n==1){
      cout<<"neither composite nor prime";
    }
  for(i=n/2;i>=2;i--){
    if(n%i==0){
      cout<<"numbr is composite";
      
    }
    else{
     cout<<"numbr is prime";
     break;
    }
  }
  return 0;
}