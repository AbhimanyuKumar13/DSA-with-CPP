#include<iostream>
using namespace std;
// Array is always pass by reference.

void change(int array[]){
  array[3]=50;
}
int main(){
    int arr[10];
    cout<<"Enter array elements : ";
    for(int i=0;i<=4;i++){
      cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr); // function calling
    for(int i=0;i<=4;i++){
      cout<<arr[i]<<" ";
    }
  return 0;
}