#include<iostream>
using namespace std;

int main(){
  string str="i am coder ";
  // cout<<str;
  int n = str.length(); // calculating length of string
  for(int i=0;i<n;i++){
    cout<<str[i];
  }
  return 0;
}