#include<iostream>
using namespace std;

int main(){
    int x=2;
    int y=5;
    cout<<x<<" "<<y<<endl;
    
    // first method

    // int temp=x;
    // x=y;
    // y=temp;
    // cout<<x<<" "<<y;

    // second method (without using any extra variable)

    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;
  return 0;
}