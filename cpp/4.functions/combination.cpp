#include<iostream>
using namespace std;

int fact(int number){
  int f=1; 
  for(int i=1;i<=number;i++){
    f *=i;
  }
  return f; 
}
int main(){
  int n,r;
  cout<<"Enter the value of n and r : ";
  cin>>n>>r;
  int a= fact(n);
  int b= fact(r);
  int c= fact(n-r);
  cout<<a/(b*c);
  return 0;
}