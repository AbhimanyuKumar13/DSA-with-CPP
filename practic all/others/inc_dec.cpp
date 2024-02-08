#include<iostream>
#include<conio.h>
using namespace std;

class over
{
    int a,b,c;
    public :
    void getdata(int x,int y,int z)
    {a=x;b=y;c=z;}
    void putdata()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    void operator --()
    {a=--a;b=--b;c=--c;}
    void operator ++()
    {a=++a;b=++b;c=++c;}
};

int main()
{
    over d1,d2;
    d1.getdata(10,20,30);
    cout<<"input of d1 is :"<<endl;
    d1.putdata();
    cout<<"result of d1 is :"<<endl;
    --d1;
    d1.putdata();
    d2.getdata(10,20,30);
    cout<<"input of d2 is :"<<endl;
    d2.putdata();
    cout<<"result of d2 is :"<<endl;
    ++d2;
    d2.putdata();
    
    return 0;
}