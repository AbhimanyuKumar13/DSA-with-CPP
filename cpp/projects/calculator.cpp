#include<iostream>
using namespace std;

float num1, num2;

int calculation(int num1, int num2){
  char character;
  cout<<"Enter first number :";
  cin>>num1;
  cout<<"Enter operater : ";
  cin>>character;
  cout<<"Enter second number :";
  cin>>num2;
  switch (character)
  {
  case '+':
    cout<<"Addition is :"<<num1 + num2<<endl;
    break;
  case '-':
    cout<<"subtraction is :"<<num1 - num2<<endl;
    break;
  case '*':
    cout<<"multiplication is :"<<num1 * num2<<endl;
    break;
  case '/':
    cout<<"subtraction is :"<<num1 / num2<<endl;
    break;
  default:
    cout<<"please enter valid opearter(+, -, *, /)"<<endl;
    break;
  }
  return calculation(num1, num2);
}
int main()
{
  return calculation(num1, num2);

}