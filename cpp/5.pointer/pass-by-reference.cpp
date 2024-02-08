#include<iostream>
using namespace std;

// first method

// int swap(int& a, int& b){ // a=12, b= 45 ( pass by reference)
//   int temp=a;
//   a=b;
//   b=temp; 
// }
// int main(){
//     int x=12, y=45;
//     cout<<x<<" "<<y<<endl;
//     swap(x, y);
//     cout<<x<<" "<<y<<endl;
//   return 0;
// }
//--------------------------------------------->
// second method (with the help of pointers)

int swap(int* a, int* b){ // a=12, b= 45 ( pass by reference)
  int temp=*a;
  *a=*b;
  *b=temp; 
}
int main(){
    int x=12, y=45;
    cout<<x<<" "<<y<<endl;
    swap(&x, &y);
    cout<<x<<" "<<y<<endl;
  return 0;
}