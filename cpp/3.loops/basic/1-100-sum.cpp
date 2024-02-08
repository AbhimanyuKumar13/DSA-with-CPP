#include<iostream>
using namespace std;

int main(){
  int sum=0,i,n;
    for(i=1;i<=10;i++){
      sum=sum+i;
    }
    cout<<sum<<endl;

    //second method

  cout<<"enter value of n :";
  cin>>n;
  cout<<(n+1)*n/2;
  return 0;
}