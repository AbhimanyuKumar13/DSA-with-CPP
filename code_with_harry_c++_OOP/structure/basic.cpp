#include<iostream>
using namespace std;

/*structure is use to store different type of data. we use struct keyword t define it */

int main()

{
    // syntax --->

    // struct demo
    // {
    //     /* data */
    // };
    
    typedef struct employee
    {
        int id;
        float salary;
        char favch;
    } Abhi; // typedef use is to create shortcut of struct employee.
    Abhi golu;
    Abhi anand;

    golu.salary = 120; 
    golu.favch=  'c';
    golu.id= 2200378;
    anand.salary= 120;
    anand.favch= 'r';
    anand.id=2200397;
    cout<<"The golu id is :"<<golu.id<<endl;
    cout<<"The golu salary is :"<<golu.salary<<endl;
    cout<<"The golu favch is :"<<golu.favch<<endl;
    cout<<"The anand id is :"<<anand.id<<endl;
    cout<<"The anand  salary :"<<anand.salary<<endl;
    cout<<"The anand favch is :"<<anand.favch<<endl;




    return 0;
}