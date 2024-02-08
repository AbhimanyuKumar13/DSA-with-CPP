#include<iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cout<<"Enter first number : ";
  cin>>num1;
  cout<<"Enter second number : ";
  cin>>num2;
  cout<<"Enter third number : ";
  cin>>num3;
  if(num1>num2){
    if(num1>num3){
      cout<<"first number is greater and number is :"<<num1;
    }
    else{
      cout<<"third number is greater and number is :"<<num3;
    }
  }
  else{
    if(num2>num3){
      cout<<"second number is greater and number is :"<<num2;
    }
    else{
      cout<<"third number is greater and number is :"<<num3;
    }
  }
  return 0;
}