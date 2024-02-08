#include<iostream>
using namespace std;

// find the difference between the sum of elements at even indices to the sum of elements at odd indices.

int main(){

    int n,sum_even=0,sum_odd=0;
     
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    } 
    for(int i=0;i<n;i++){
        if(i%2==0){
          sum_even+=arr[i];
        }
        else{
          sum_odd+=arr[i];
        }
    } 
    cout<<"difference is : "<<sum_even-sum_odd;
  return 0;
}