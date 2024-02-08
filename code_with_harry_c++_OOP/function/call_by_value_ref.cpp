#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c=a+b;
    return c;
}

// this will not swap a and b.
int swap(int a, int b)// inter change the values.
{
    int temp =a;
    a = b;
    b = temp;
}
// call by reference using pointer.
int swapPointer(int* a, int* b)
{
    int temp =*a;
    *a = *b;
    *b = temp;
} 
// call by reference using c++ reference variables.
// int &  // ---> for return reference 
int swapReferenceVar(int &a, int &b)
{
    int temp =a;
    a = b;
    b = temp;
    return a;
} 


int main()
{
    int x=4,y=5;
//    cout<<"the sum of 4 and 5 is :\n"<<sum(4,5); 

    cout<<"The value of x is :"<<x<<"\nand the value of y is :"<<y<<endl;

    // swap(x, y);//this will not swap a and b.

    // swapPointer(&x,&y);// this will swap a and b using pointer reference.

    // swapReferenceVar(x, y)=50; // this will swap a and b using return variable.

    swapReferenceVar(x, y); //this will swap a and b using reference variable.

    cout<<"The value of x is :"<<x<<"\nand the value of y is :"<<y<<endl;
    
    return 0;
}