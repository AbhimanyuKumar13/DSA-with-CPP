#include<iostream>
using namespace std;

// WAP to copy the content of one array into another in the reverse order.

int main(){
  int n;
  int i;  
  int j;  

  cout<<"Enter the value of array size : ";
  cin>>n;

  int arrayA[n];
  int arrayB[n];

  cout<<"Enter the elements of arrayA : ";
  for(i=0;i<n;i++){
    cin>>arrayA[i];
  }
  cout<<"arrayA elements are : ";
  for(int i=0;i<n;i++){
    cout<<arrayA[i]<<" ";
  }
  for(int i=0;i<n;i++){  
    arrayB[i]=arrayA[n-1-i];
  }
  cout<<endl<<"arrayB elements are : ";
  for(int i=0;i<n;i++){
    cout<<arrayB[i]<<" ";
  }
  return 0;
}