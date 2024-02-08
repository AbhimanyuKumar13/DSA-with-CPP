#include<iostream>
using namespace std;

int main()
{
  float principle, rate, time;
  cout<<"Enter the value of principle rate and time : ";
  cin>>principle>>rate>>time;
  cout<<"your simple interest is :"<<(principle*rate*time)/100;
  return 0;
}