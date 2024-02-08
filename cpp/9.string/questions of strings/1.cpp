#include<iostream>
using namespace std;

// input a string and count all the vowels in the given string.

int main(){
  string s="i wiil be a leader whose rule over whole world.";
  int count=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
      count++;
    }
  }
  cout<<"no of vowels in the sentence : "<<count; 
  return 0;
}