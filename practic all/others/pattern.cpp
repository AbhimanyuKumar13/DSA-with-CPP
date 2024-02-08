#include<iostream>
using namespace std;

int main()
{
    int row,n,col;
    cout<<"enter the value of n :\n";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        if((row%2)==1)
        {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        } 
        else
        {
        for(col=1;col<=row;col++)
        {
            cout<<(char)(col+64)<<" ";
        } 
        }
        
        cout<<endl;
    }
    return 0;
}