#include<iostream>
#include<conio.h>
using namespace std;

class time
{
    int h,m;
    public :
    time() : h(10),m(55)
    {
    }
    void display()
    {
        cout<<h<<":"<<m<<endl;
    }
};

int main()
{
    time t;
    t.display();
   return 0;

}