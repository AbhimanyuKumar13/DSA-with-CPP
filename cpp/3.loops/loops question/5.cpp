#include<iostream>
using namespace std;
// WAP t print reverse of a given number.
int main(){
    // int n,lastdigit;
    // int reverse=0;
    // cout<<"Enter number : ";
    // cin>>n;
    // while(n>0){
    //   lastdigit=n%10;
    //   reverse= (reverse*10) + lastdigit;
    //   n=n/10;
    // }
    // cout<<reverse<<" ";

    // second method
    int n,lastdigit;
    cout<<"Enter number : ";
    cin>>n;
    while(n>0){
      lastdigit=n%10;
      cout<<lastdigit<<" ";
      n=n/10;
    } 
  return 0;
}