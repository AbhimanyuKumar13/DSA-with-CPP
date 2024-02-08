#include<iostream>
using namespace std;
int row, cols;
int fact(int number){
  int f=1;
  for(int i=1;i<=number;i++){
    f*=i;
  }
  return f;
}
int result(){
  return fact(row)/(fact(cols)*fact(row-cols));
}  
int main(){
  int m;
  cout<<"Enter the value of rows : ";
  cin>>m;
    for(row=0;row<=m;row++){
      for(int i=0;i<m-row;i++){
        cout<<"  ";
      }
      for(cols=0;cols<=row;cols++){
        cout<<result()<<"   ";
      }
      cout<<endl;
    }
  return 0;
}