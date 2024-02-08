#include<iostream>
using namespace std;

// count the no of element in the given array greater than a given number x.

int main(){
    int n, x, count=0;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<"Enter comparing element : ";
    cin>>x;
    for(int i=0;i<n;i++){
       if(arr[i]>x){
        count++;
       }
    }
    cout<<count;
  return 0;
}