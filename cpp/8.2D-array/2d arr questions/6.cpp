#include<iostream>
using namespace std;

// given a matrix 'a' of dimension m*n and 2 coordinates(a, b) and (c, d). return the sum of the rectangle from (a, b) to (c, d).

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
  int a1,a2,b1,b2;
  int sum=0;
  cout<<"Enter first co-ordinates : ";
  cin>>a1>>b1;
  cout<<"Enter second co-ordinates : ";
  cin>>a2>>b2;
  cout<<sum;
  for(int i=0;i<m;i++){ 
    for(int j=0;j<n;j++){ 
      if(i>=a1 && i<=a2 && j>=b1 && j<=b2){
        sum+=arr[i][j];
      } 
    } 
  }
  cout<<sum;
  return 0;
}