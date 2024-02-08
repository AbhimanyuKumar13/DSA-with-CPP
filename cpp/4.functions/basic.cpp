#include<iostream>
using namespace std;

/*function : A function is a block of code which only runs when it is called.*/
 
void sum(int a, int b){
    
  cout<<a+b<<endl;
  return;  
}
int sub(){
  int a=10,b=5;
  cout<<a-b;
  return 0;
}
int main(){   
  cout<<"it's start from here :"<<endl;
  sum(20, 25);
  sub();
  return 0; //
}