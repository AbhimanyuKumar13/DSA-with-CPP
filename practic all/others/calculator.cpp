#include<iostream>
using namespace std;

int main()
{
    char op;
    int number1,number2;
         
    while(true){
        cout<<"Enter first number : "<<endl;
        cin>>number1;

        cout<<"Enter operator you want to perform (q for stop ):"<<endl;
        cin>>op;
        if(op=='q'){
                break;
        }
        if(op!='p')
        {
        cout<<"Enter second number : "<<endl;
        cin>>number2;
        }
        else
        cout<<"enter value of percent";
        cin>>number2;
        
   
        switch(op){
                case ('+'):
                        cout<<"addition is : "<<number1 + number2;
                        break;
                case ('-'):
                        cout<<"subtraction is : "<<number1 - number2;
                        break;
                case ('*'):
                        cout<<"multiplication is : "<<number1 * number2;
                        break;
                case ('p'):
                        cout<<"percent is : "<<(number1 * number2)/100;
                        break;
                case ('/'):
                        if(number2==0)
                        {
                        cout<<"not divisiable"<<endl;
                        }
                        else{
                        cout<<"division is : "<<number1 / number2;
                        }
                        break;
                case ('%'):
                        cout<<"reminder is : "<<number1 % number2;
                        break;
         
                default :
                        cout<<"invailed op enter";
        }
                cout<<endl;
         
    }
    return 0;
}