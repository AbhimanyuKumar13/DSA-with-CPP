#include<iostream>
using namespace std;
int swap(int a, int b){ // a=12, b= 45 ( pass by value)
  int temp=a;
  a=b;
  b=temp;
  cout<<a<<" "<<b<<endl;
}
int main(){
    int x=12, y=45;
    cout<<x<<" "<<y<<endl;
    cout<<swap(x, y);
  return 0;
}