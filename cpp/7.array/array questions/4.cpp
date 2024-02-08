#include<iostream>
using namespace std;

// given an integer n. create an array containing squares of all natural numbers till n and print the elements of the array. 

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    // cout<<"Enter the value of array elements : ";
    // for(int i=0;i<n;i++){
    //   cin>>arr[i];
    // }
    for(int i=0;i<n;i++){ 
      cout<<(i+1)*(i+1)<<" "; 
    }
  return 0;
}