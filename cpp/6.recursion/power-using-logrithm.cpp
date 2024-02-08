#include<iostream>
using namespace std;

int power(int x, int y ){ 
  if(y==1){
    return x;
  }
  else if(y==0){
    return 0;
  } 
  else if(y%2==0){
    return power(x, y/2)*power(x, y/2);
  }
  else{
    return power(x, y/2)*power(x, (y+1)/2);
  }
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