#include<iostream>
using namespace std;

int main()
{
  float pi=3.14, radius;
  cout<<"Enter the radius of sphere : ";
  cin>>radius;
  cout<<"the volume of sphere is :"<<4.0/3.0*pi*radius*radius*radius; //   4/3=1 but 4.0/3.0=1.33...
  return 0;
}