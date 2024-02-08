#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int row ,col;
    int a=1;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
       
       
       
    }
    return 0;
}