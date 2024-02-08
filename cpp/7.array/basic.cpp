#include<iostream>
using namespace std;

int main(){

  int arr[5]={1, 3, 5, 7, 9}; // declearation

  // cout<<"Enter the array elements : ";
  // for(int i=0;i<=4;i++){
  //   cin>>arr[i];
  // }
  for(int i=0;i<=4;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  arr[3]=1000;
  // for(int i=0;i<=4;i++){
  //   cout<<arr[i]<<" ";
  // }
  // reverse printing ------------------------------>
  for(int i=4;i>=0;i--){
    cout<<arr[i]<<" ";
  }
  return 0;
}