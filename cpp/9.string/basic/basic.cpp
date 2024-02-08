#include<iostream>
using namespace std;

int main(){
  string str; // string declearation
  cout<<"Enter your name : ";
  // cin>>str; // given an error when you type an space. 
  getline(cin,str);
  cout<<"your name is : "<<str;
  return 0;
}