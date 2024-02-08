#include<iostream>
using namespace std;

int main()
{
  int marks;
  cout<<"Enter your obtained marks in percentage : ";
  cin>>marks;
  if(marks>80 && marks<=100){
    cout<<"your grade is A+ (very good)";
  }
  else if(marks>60 && marks<=80){
    cout<<"your grade is A ( good)";
  }
  else if(marks>40 && marks<=60){
    cout<<"your grade is B (average)";
  }
   else if(marks<=40 && marks>=0){
    cout<<"your grade is D  (fail)";
  }
  else{
    cout<<"enter valid percentage (0-100)";
  }
  return 0;
}