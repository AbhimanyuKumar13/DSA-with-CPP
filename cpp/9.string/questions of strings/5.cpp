#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

// input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt function.

int main(){
  string s="Abhimanyu";
  cout<<s<<endl; 
  reverse(s.begin()+1,s.begin()+5);
  cout<<s;
}