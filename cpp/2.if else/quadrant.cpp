#include<iostream>
using namespace std;

int main(){
  int x,y;
  cout<<"Enter the value of x and y : ";
  cin>>x>>y;
  if(x==0 && y==0){
    cout<<"point at origin (0,0)";
  }
  else if(x>0 && y>0){
    cout<<"points in first quadrant ("<<x<<","<<y<<")";
  }
  else if(x<0 && y>0){
    cout<<"points in second quadrant ("<<x<<","<<y<<")";
  }
  else if(x<0 && y<0){
    cout<<"points in third quadrant ("<<x<<","<<y<<")";
  }
  else if(x>0 && y<0){
    cout<<"points in fourth quadrant ("<<x<<","<<y<<")";
  }
  return 0;
}