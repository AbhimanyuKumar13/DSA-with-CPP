#include<iostream>
using namespace std;

int main()
   {
//     for (int i = 0; i < 10; i++)
//     {
       
//         if(i==2)
//         {
//             break; // skip all the next thing.stop here.

//         }
//         cout<<i<<endl;
//     }
     
     
    for (int i = 0; i < 10; i++)
    {
       
        if(i==2)
        {
            continue; //skip paticular item then continue.
        }
        cout<<i<<endl;
    }
    
    
    return 0;
}