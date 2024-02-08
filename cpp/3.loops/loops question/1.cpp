#include<iostream>
using namespace std;
// WAP to count digits of given number.
int main(){
    int n,count=0;
    cout<<"Enter the value of n :";
    cin>>n;
    while(n>0){
      n=n/10;
      count++;
    }  
    cout<<count;
  return 0;
}