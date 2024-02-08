#include<iostream>
using namespace std;
// 1 1 2 3 5 8 13 21 34 55 .....// add prev two term.
int fibonacci(int n){
  if(n==1 || n==2){
    return 1;
  }
  else{
    return  fibonacci(n-1)+ fibonacci(n-2);
  }
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"fibonacci of "<<n<<" th trem is : "<<fibonacci(n);
  return 0;
}