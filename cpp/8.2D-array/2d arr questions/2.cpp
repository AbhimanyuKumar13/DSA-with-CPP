#include<iostream>
using namespace std;

// WAP to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

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
      cout<<"10"<<" ";
    }
    cout<<endl;
  }
  return 0;
}
