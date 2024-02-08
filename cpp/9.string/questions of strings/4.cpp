#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int main(){
  string s="Abhi";
  cout<<s<<endl;
  int n=s.size();
  reverse(s.begin(),s.end()-n/2);
  cout<<s;
}