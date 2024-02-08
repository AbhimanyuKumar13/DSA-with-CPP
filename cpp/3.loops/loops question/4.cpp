#include<iostream>
using namespace std;
//WAP to print sum of all even digits of a given number.
int main(){
    int n,adding=0,lastdigit;
    cout<<"Enter number : ";
    cin>>n;
    while(n>0){
      lastdigit=n%10;
      if(lastdigit%2==0)
      adding+=lastdigit;
      n=n/10;
    }
    cout<<adding;
  return 0;
}