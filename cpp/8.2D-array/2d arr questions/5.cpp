#include<iostream>
using namespace std;

// find the sum of all elements in a given array .

int main(){
  int m,n;
  cout<<"Enter the row and column size of array : ";
  cin>>m>>n;
  int arr[m][n];  

  cout<<"Enter the elements of array (non-zero): ";
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  } 
  int sum=0;
  int product=1;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){ 
      sum+=arr[i][j];
      product*=arr[i][j];
    }
  } 
  cout<<"sum of all elements given in a array is : "<<sum<<endl;
  cout<<"product of all elements given in a array is : "<<product<<endl;
  return 0;
}