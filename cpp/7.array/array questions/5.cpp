#include<iostream>
using namespace std;

// given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(i%2==0){
        cout<<arr[i]+10<<" ";
      }
      else{
        cout<<arr[i]*2<<" ";
      }
    }
  return 0;
}