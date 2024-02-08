#include<iostream>
using namespace std;

int main()

{ 
    int age;
     cout<<"tell me your age :";
     cin>>age;
     if((age<18)&&(age>0))
     {
        cout<<"you can not vote";
     }
     else if(age==18)
     {
        cout<<"wait 1 year for vote";
     }
     else if(age<1)
     {
        cout<<"you can not vote";
     }
     else
     {
        cout<<"you can vote";
     }
    return 0;
}