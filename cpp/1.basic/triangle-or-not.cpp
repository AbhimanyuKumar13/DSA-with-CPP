#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout<<"Enter the sides of triangle : ";
  cin>>a>>b>>c;

  if((a+b)>c && (b+c)>a && (a+c)>b){
    cout<<"it's a triangle";
  }
  else{
        cout<<"it's not a triangle";
  }
  return 0;
}