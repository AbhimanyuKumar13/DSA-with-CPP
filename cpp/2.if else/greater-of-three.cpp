#include<iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cout<<"enter first number : ";
  cin>>num1;
  cout<<"enter second number : ";
  cin>>num2;
  cout<<"enter third number : ";
  cin>>num3;
  if(num1>num2 && num1>num3){
    cout<<"first number is greater and it is "<<num1;
  }
  else if(num1<num2 && num3<num2){
    cout<<"second number is greater and it is "<<num2;
  }
  else{
    cout<<"third number is greater and it is "<<num3;
  }
  
  return 0;
}