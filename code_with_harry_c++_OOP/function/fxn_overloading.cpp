#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"using fxn with 2 arguments "<<endl;
    return a+b;
}
int sum(int a, int b, int c)
{
      cout<<"using fxn with 3 arguments "<<endl;
    return a+b+c;
}

// calculate the volume of cylinder
int vol(int r, int h)
{
    return (3.14*r*r*h);
}
// calculate the volume of cube
int vol(int a)
{
    return a*a*a;
}
// calculate the volume of cuboid
int vol(int l, int h, int b)
{
    return (l*b*h);
}


int main()
{
    cout<<"The sum of 3 and 6 is :"<<sum(3, 6)<<endl;
    cout<<"The sum of 3 ,6 and 7 is :"<<sum(3, 6, 7)<<endl;

    cout<<"the volume of cube a=3 is :"<<vol(3)<<endl;
    cout<<"the volume of cuboid l=3, b=4, h=5 is :"<<vol(3, 4, 5)<<endl;
    cout<<"the volume of cylinder r=3, h=4 is :"<<vol(3, 4)<<endl;
    return 0;
}