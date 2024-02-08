#include<iostream>
#include<windows.h>
using namespace std;   

int main()
{
    int n;
    cout<<"enter the no :\n";
    cin>>n;
    for(int i=n;i>=1;i-=4)
    {
        cout<<i<<endl;
        Sleep(600);
    }
    return 0;
}
