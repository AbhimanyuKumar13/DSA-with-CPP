#include<iostream>
using namespace std;
// while and do while loop basic syntax type program
int main()
{
  // while loop 
  int i=1;
  while(i<=10){
    cout<<i<<" ";
    i++;
  }

  // do while loop
  i=11;
  do{
    cout<<i<<" ";
    i++;
  }while(i<=20);
  
  return 0;
}