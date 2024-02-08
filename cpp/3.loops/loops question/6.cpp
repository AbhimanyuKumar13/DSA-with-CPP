#include<iostream>
using namespace std;
// WAP to print the sum of a given number with it's reverse number.
int main(){
    int n, lastdigit, no=0, reverse=0;
    int factor=1;
    cout<<"Enter number : ";
    cin>>n;
    while(n>0){
      lastdigit=n%10;
      reverse= (reverse*10) + lastdigit;
      no=no+factor*lastdigit;
      factor*=10;
      n=n/10; 
    }
    cout<<reverse+no<<" ";    
    cout<<no<<" ";    

  return 0;
}