#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int row,n,col;
    cout<<"enter the value of n :\n";
    cin>>n;
    for(row=5;row>=1;row--) 
    {
        for(col=1;col<=row;col++) // row+col=n+1 ---> col<= n-row+1
        {
            cout<<col<<" ";
            Sleep(100);
        }
        cout<<endl;
        Sleep(200);
    }
    return 0;
}