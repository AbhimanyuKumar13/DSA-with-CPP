#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int n;
    string name;
    cout<<"Hii guys,I am Al : nature detector"<<endl;   
    cout<<"you can freely talk to me "<<endl; 

    cout<<"Just tell me some basic thing about you :"<<endl;

    cout<<"What is your name :"<<endl;
    cin>>name;
    
    cout<<"Hii "<<name<<", "<<"I hope you are good."<<endl;
    cout<<"Here is a some basic question please give answer to me."<<endl<<endl; 
    
    int input;
    cout<<"In your front a baby dog is injured. you want to help.(1=yes, 2=no)"<<endl; 
    cin>>input;
    cout<<"After your marriage you want to shaperated t your brother.(1=yes, 2=no)"<<endl; 
    cin>>input;
    cout<<"A friend is asking for money you want to help ?.(1=yes, 2=no) "<<endl; 
    cin>>input;
    
    if(input==1)
    {
        cout<<"awasome, keep it up and don't change you mind in future.";
    }
    else{
        cout<<"you bloody go to hell "<<endl;
    }
    return 0;
}