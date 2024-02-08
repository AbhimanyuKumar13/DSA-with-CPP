#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int row,n,col;
    cout<<"enter the value of n :\n";
    cin>>n;

    for(row=1;row<=5;row++) 
    {
        for(col=1;col<=row;col++)  
        {
            cout<<2*col-1<<" ";
            
        }
        cout<<endl;
    }
    for(row=1;row<=5;row++) 
    {
        for(col=1;col<=row*2-1;col+=2)  
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    for(row=1;row<=5;row++) 
    {
        int a=1;
        for(col=1;col<=row;col++)  
        {
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }
    return 0;
}