#include<iostream>
using namespace std;

// void print(int x, int n){
//   if (x>n) return; //base case
//   cout<<x<<endl; // work
//   print(x+1,n); // call
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     print(1, n);
//   return 0;
// }
//------------------------------------------->

void print(int x){
  if (x==0) return; 
  print(x-1);
  cout<<x<<endl; //actually all function call doing first after that last line execute from last function call.
  
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    print(n);
  return 0;
}