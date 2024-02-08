#include<iostream>
using namespace std;

int fact(int number){
  int f=1;
  for(int i=1;i<=number;i++){
    f*=i;
  }
  return f;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter n : ";
    cin>>r;
    int a=fact(n);
    int b=fact(n-r);
    cout<<a/b;
  return 0;
}