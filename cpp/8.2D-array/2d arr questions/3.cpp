#include<iostream>
using namespace std;

// WAP to add two matrices;
 
int main(){
  int m,n;
  cout<<"Enter the row and column size of arrays : ";
  cin>>m>>n;
  int arr1[m][n]; 
  int arr2[m][n]; 

  cout<<"Enter the elements of first array : ";
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr1[i][j];
    }
  }
  cout<<"Enter the elements of second array : ";
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr2[i][j];
    }
  }

  int arr3[m][n]; 
  for(int k=0;k<m;k++){
    for(int l=0;l<n;l++){ 
      arr3[k][l]=arr1[k][l]+arr2[k][l];
    } 
  }
  cout<<"addition of arrays is : "<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}