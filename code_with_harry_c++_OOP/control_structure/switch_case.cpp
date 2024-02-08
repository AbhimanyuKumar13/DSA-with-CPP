#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age :";
    cin>>age;

    switch(age)
    {
        case 1 :
         cout<<"you are a child ager :";
         break;
    case 12 :
         cout<<"you enter in teen ager :";
         break;
    case 18 :
         cout<<"you enter in adult ager :"<<endl;
         break;
    case 30 :
         cout<<"you enter in man ager :";
         break;
    case 60 :
         cout<<"now you are old ager :";
         break;
    default :
    cout<<"no special age";
}
    return 0;
}