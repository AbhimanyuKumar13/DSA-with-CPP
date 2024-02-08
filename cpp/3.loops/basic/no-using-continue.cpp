#include<iostream>
using namespace std;
// printing odd numbers using continue statement
int main()
{
  int n,i;
  cout<<"Enter the value of n :";
  cin>>n;
  for(i=1;i<=n;i++){
    if(i%2==0){
      continue;
    }
    else{
      cout<<i<<" ";
    }
  }
  return 0;
}