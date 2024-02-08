#include<iostream>
using namespace std;

struct emp      // structure name (emp)
{
   string name;      // structure member
};

int main()
{
   emp e[5];      // array-of-structure variable (e[5])
   int i;

   for(i=0; i<5; i++)
   {
      cout<<"Enter the name of the employee no."<<i+1<<": ";
      cin>>e[i].name;
   }

   cout<<"\nNames of all employees: \n";
   for(i=0; i<5; i++)
   {
      cout<<e[i].name<<endl;
   }
   cout<<endl;

   return 0;
}