#include<iostream>
using namespace std;

int main()
{
  float length, breath;
  cout<<"Enter the value of length and breath of rectangle : ";
  cin>>length>>breath;
  int Area=length*breath;
  cout<<"area of rectangle is "<<Area<<endl;
  int perimeter=2*(length*breath);
  cout<<"perimeter of rectangle is "<<perimeter<<endl;
  if(Area>perimeter){
    cout<<"Area is greater than the perimeter";
  }
  else{
    cout<<"Perimeter is greater than the area";
  }
  return 0;
}