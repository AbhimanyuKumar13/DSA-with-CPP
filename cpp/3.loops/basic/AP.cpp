#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the value of n :";
  cin>>n;
  int a=7;
  for(int i=1;i<=n;i++){
    cout<<a<<endl;
    a+=3;
  }

  // alternate method

  // An= a + (n-1)*d  
  // An= 7 + (n-1)*3  
  // An= 7 + 3*n -3  
  // An= 4 + 3*n  


  for(int j=7;j<=(4+3*n);j+=3){
    cout<<j<<" ";
  }
  return 0;
}