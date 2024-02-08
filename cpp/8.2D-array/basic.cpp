#include<iostream>
using namespace std;

int main(){
  int m,n;
  cout<<"Eneter the row and column size of array : ";
  cin>>m>>n;
  int arr[m][n]; // 2D-array declearation

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
  return 0;
}