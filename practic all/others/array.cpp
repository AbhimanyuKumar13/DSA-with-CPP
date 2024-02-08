#include<iostream>
using namespace std;

int main()
{
    int marks[]={30,39,60,76,98};
    int eng_marks[]={30,39,60,76,98};
    int math_marks[5];
    math_marks[0]= 99;
    math_marks[1]= 92;
    math_marks[2]= 78;
    math_marks[3]= 67;
    math_marks[4]= 45;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    for (int i = 0; i < 5; i++)    
    {
        cout<<"The marks of "<<i<<" is : "<<marks[i]<<endl;
    }
     int i=0;
    while(i<5)
    {
        cout<<"The math_marks of "<<i<<" is : "<<math_marks[i]<<endl;
        i++;
    }
    i=0;
    do
    {
        cout<<"The marks of "<<i<<" is :"<<marks[i]<<endl;
          i++;
    }while(i<5);
  
    
    

    
    return 0;
}