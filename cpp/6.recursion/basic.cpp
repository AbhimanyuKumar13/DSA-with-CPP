#include<iostream>
using namespace std;

// recursion : when a function is called itself called recursion.

void greet(){
  cout<<"hey stop it! with (ctrl + c) "<<endl;
  greet();
}
int main(){
    greet();
  return 0;
}