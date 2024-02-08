#include<iostream>
using namespace std;

// if an array arr contains n elements then check it the given array is a palindrone{1 2 3 4 3 2 1} or not.

int main(){
  int n,i;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements : ";
  for(i=0;i<n;i++){
    cin>>arr[i];
  } 
  for(i=0;i<n;i++){ 
    if(arr[0]!=arr[n-1]){
      cout<<"not palindrone";
      break;
    }
  }
  cout<<"palindrone";
  return 0;
}