#include<iostream>
using namespace std;

// input a string of length n and update all the even positions int the string to character'A'. consider 0-based indexing.

int main(){
  string str;
  cout<<"Enter your name : ";
  getline(cin, str);
  int n = str.length();
  for(int i=0;i<n;i++){
    if(i%2==0){
      str[i]='A';
    }
  }
  cout<<str;
  return 0;
}