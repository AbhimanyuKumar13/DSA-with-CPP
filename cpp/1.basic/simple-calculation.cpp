#include<iostream>
using namespace std;

int main()
{
  int number1, number2, number3;
  cout<<"Enter three numbers : ";
  cin>>number1>>number2>>number3;
  cout<<"additiion of three number is : "<<number1+number2+number3<<endl;
  cout<<"subtraction of two number is : "<<number1-number2<<"\n";
  cout<<"multiplication of three number is : "<<number1*number2*number3<<"\n";
  cout<<"division of two number is : "<<number1/number2<<"\n";
  cout<<"reminder of two number is : "<<number1%number2<<"\n"; // -a%b= -[a%b] but a%-b = a%b
  return 0;
}