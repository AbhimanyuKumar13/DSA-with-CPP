#include<iostream>
using namespace std;

// WAP to print the sum of array (take input from user)

int main(){
  int i, n, sum=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array elements : ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<n;i++){ 
      cout<<arr[i]<<" ";
      sum+=arr[i];
    }
    cout<<"sum is : "<<sum<<endl;
    cout<<"size of array is : "<<sizeof(arr)/4;
  return 0;
}