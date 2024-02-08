#include<iostream>
using namespace std;

// WAP to print the product of array (take input from user)

int main(){
  int i, n, product=1;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array elements : ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<n;i++){ 
      cout<<arr[i]<<" ";
      product*=arr[i];
    }
    cout<<endl<<"product of elements is : "<<product<<endl;
    cout<<"size of array is : "<<sizeof(arr)/4;
  return 0;
}