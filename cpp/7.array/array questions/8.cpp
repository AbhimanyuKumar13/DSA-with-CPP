#include<iostream>
using namespace std;

// find the second largest/smallest element in the given array.

int main(){

  int n;
  cout<<"Enter the size of the array :";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements of the array : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maximum=arr[0],second_maximum=arr[0];
  int minimum=arr[0],second_minimum=INT32_MAX;
  for(int i=0;i<n;i++){
    maximum=max(maximum, arr[i]);  
  } 
  for(int i=0;i<n;i++){
    minimum=min(minimum, arr[i]);  
  } 
  for(int i=0;i<n;i++){ 
    if(arr[i]!=maximum){
      second_maximum=max(second_maximum,arr[i]);
    }
  } 
  for(int i=0;i<n;i++){ 
    if(arr[i]!=minimum){
      second_minimum=min(second_minimum,arr[i]);
    }
  } 
  cout<<"maximum : "<<maximum<<endl;
  cout<<"second_maximum : "<<second_maximum<<endl;
  cout<<"minimum : "<<minimum<<endl;
  cout<<"second_minimum : "<<second_minimum<<endl;
  return 0;
}