#include<iostream>
using namespace std;

// WAP to print the transpose of the matrix entered by the user.

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
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    } 
    cout<<endl;
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[j][i]<<" ";
    } 
    cout<<endl;
  }
  return 0;
}