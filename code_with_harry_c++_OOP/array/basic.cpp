#include<iostream>
using namespace std;

int main()
{
    int marks[]={80,48,68,40,30}; //array making
    int mathmarks[5];
    mathmarks[0]=455;
    mathmarks[1]=355;
    mathmarks[2]=445;
    mathmarks[3]=465;
    mathmarks[4]=485;
    cout<<"these are value of mathmarks"<<endl;

    mathmarks[2]=0; // you can change the value of array

    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[4]<<endl;
    cout<<"these are value of marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    // for (int i = 0; i <= 4; i++)
    // {
    //     cout<<"The marks of "<<i<<" is :"<<marks[i]<<endl;
    // }

    // int i=0;
    // while (i<=4)
    // {
    //     cout<<"The marks of "<<i<<" is :"<<marks[i]<<endl;
    //     i++;
    // }

    int i=0;
    do
    {
       cout<<"The marks of "<<i<<" is :"<<marks[i]<<endl;
       i++;
    } while (i<=4);
    
    
    

    // pointer and array


    int* p = marks;

    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;

    // cout<<"The value of *p is :"<<*p<<endl;
    // cout<<"The value of *(p+1) is :"<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is :"<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is :"<<*(p+3)<<endl;
    // cout<<"The value of *(p+4) is :"<<*(p+4)<<endl;
     
    
    return 0;
}