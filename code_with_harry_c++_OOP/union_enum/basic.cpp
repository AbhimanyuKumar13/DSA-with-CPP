#include<iostream>
using namespace std;

union money
    {
         int a;
         float dollor;
         char car;
    }m1,m2;

int main()
{
    enum meal{breakfast,lunch,dinner};
    // meal me1 =lunch;
    // cout<<me1<<endl;

    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;


    
    // syntax --->
    // union basic
    // {
    //     /* data */
    // };
    
     
    m1.a = 10;
    m1.car =100;
    m2.dollor=1;

    cout<< m1.a<<endl;
    cout<< m1.car<<endl;
    cout<< m2.dollor<<endl;
     
    
    return 0;
}