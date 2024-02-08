#include<iostream>
#include<windows.h> // for delay (sleep function)
using namespace std;

int main()
{
  int n,i;
  int choice;
  cout<<"Enter how many times you want to print your name : ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cout<<"Hii Abhi"<<endl;
    Sleep(300);
  }
  return 0;
}