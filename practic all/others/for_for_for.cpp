#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int row ,col;
    for(row=10;row<=15;row++)
    {
        for(col=10;col<=row;col++)
        {
            if(col<15)
            cout<<col<<" ";
        }
        cout<<endl;
        Sleep(600);
    }
    return 0;
}