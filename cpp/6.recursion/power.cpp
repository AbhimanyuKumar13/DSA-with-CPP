#include<iostream>
using namespace std;

int power(int x, int y ){
  if(y==0) return 1;
  return x * power(x, y-1);
}
int main(){
    int x,y;
    cout<<"Enter the value of base : ";
    cin>>x;
    cout<<"Enter the value of powers : ";
    cin>>y;
    cout<<x<<" raised to the power "<< y <<" is = "<<power(x, y);
  return 0;
}