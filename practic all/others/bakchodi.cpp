#include<iostream>
#include<windows.h>
using namespace std;

string name;
int main()
{
    
    cout<<"Hii buddy, Enter your name :"<<endl;
    cin>>name;

    cout<<"Hii "<<name<<" "<<"How are you ?."<<endl;
    Sleep(2000);
    
    for(int i=1;i<=20;i++)
    {
        cout<<name<<" ";
        Sleep(100);
        cout<<"I"<<" ";
        Sleep(100);
        cout<<"fuck"<<" ";
        Sleep(100);
        cout<<"you  "<<endl;
        Sleep(100);
    }
    return 0;
}