#include<iostream>
using namespace std;

int main(){
  string s="Abhi";
  cout<<s<<endl;

  s.push_back('M'); 
  cout<<s<<endl;

  s.pop_back();
  cout<<s<<endl;

  s.append(" Kumar");
  cout<<s<<endl;

  // s.clear();
  cout<<s.length()<<endl;

  s = s + " Pandit";
  cout<<s<<endl;
  cout<<s.length();
  return 0;
}