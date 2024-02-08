#include<iostream>
using namespace std;

int main()
{
  float cp,sp;
  cout<<"Enter the value of cost price : ";
  cin>>cp;
  cout<<"Enter the value of selling price : ";
  cin>>sp;
  if(sp==cp){
    cout<<"NO PROFIT NO LOSS";
  }
  else if(sp>cp){
    cout<<"PROFIT ="<<sp-cp;
  }
  else{
    cout<<"loss ="<<cp-sp;
  }
  return 0;
}