#include<iostream>
using namespace std;

// find the maximum/minimum element in given array element

int main(){
  int m,n;
  cout<<"Enter the row and column size of array : ";
  cin>>m>>n;
  int arr[m][n];  

  cout<<"Enter the elements of array : ";
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  int maximum=INT32_MIN;
  int minimum=INT32_MAX;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){ 
      if(arr[i][j]>=maximum) maximum=arr[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){  
      minimum=min(arr[i][j], minimum);
    }
  }
  cout<<"maximum element in the given array is : "<<maximum<<endl;
  cout<<"minimum element in the given array is : "<<minimum<<endl;
  return 0;
}