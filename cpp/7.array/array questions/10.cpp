#include<iostream>
using namespace std;

// WAP to reverse array without using any extra array. 

int main(){
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  int array[n];
  cout<<"Enter the elements of array : ";
  for(int i=0;i<n;i++){
    cin>>array[i];
  } 
  for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
  }
  int i=0,j=n-1;
  while(i<j){
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
    i++;
    j--;
  }
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
  }
  return 0;
}