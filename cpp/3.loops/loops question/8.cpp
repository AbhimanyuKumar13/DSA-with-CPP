#include<iostream>
using namespace std;
//WAP to print all ASCII values and their equivalent characters of 26 alphabets using a while loop
int main(){
    // for(int i=65;i<=122;i++)
    // {
    //   if(i>=65 &&i<=90){
    //     cout<<i<<" "<<(char)i<<"  ";
    //   }
    //   else if(i>=97 &&i<=122){
    //     cout<<i<<" "<<(char)i<<"  ";
    //   }
    // } 
    
    int i=65;
    while(i<=122){
      if(i>=65 &&i<=90){
        cout<<i<<" "<<(char)i<<"  ";
      }
      else if(i>=97 &&i<=122){
        cout<<i<<" "<<(char)i<<"  ";
      }
      i++;
    } 
  return 0;
}