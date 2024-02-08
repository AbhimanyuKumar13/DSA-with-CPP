#include<iostream>
using namespace std;

int main()
{
    int row ,col;
    for(row=1;row<=5;row++)
    {
        int a=1,b=0; 
        if(row%2==1)
        {
            for(col=1;col<=row;col++)
            {
            cout<<a<<" ";
            }
        }  
        else
        {
        for(col=1;col<=row;col++)
            {
                cout<<b++<<" ";
            }
        }
        cout<<endl;
         
    }
    return 0;
}