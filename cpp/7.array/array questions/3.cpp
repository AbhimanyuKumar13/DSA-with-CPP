#include<iostream>
using namespace std;

// WAP to print the maximum/minimum element of array (take input from user)

int main(){
  int i, n, sum=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array elements : ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    } 
    // int maximum=arr[0];
    // int minimum=arr[0];

    int maximum=INT32_MIN; // minimum value which is pre defined.
    int minimum=INT32_MAX; 

    for(i=0;i<n;i++){
      if(maximum<=arr[i]){
        maximum=arr[i];
        // maximum=max(maximum, arr[i]);
      }
      if(minimum>=arr[i]){
        minimum=arr[i];
        // maximum=min(maximum, arr[i]);
      }
    }
    cout<<"maximum element is : "<<maximum<<endl; 
    cout<<"minimum element is : "<<minimum<<endl; 
  return 0;
}