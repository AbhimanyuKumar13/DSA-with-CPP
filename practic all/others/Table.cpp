#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number whose table you want to print :"<<endl;
    cin>>n;
    cout<<"The table you want to print is below :"<<endl<<endl;

    for(int i=1;i<=10;i++)
    {
        cout<<n<<" "<<"* "<<i<<" "<<"= "<<n*i<<endl;
    }
    return 0;
}