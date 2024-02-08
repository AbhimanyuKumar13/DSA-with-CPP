#include<iostream>
using namespace std;

// *
// * *
// * * *
// * * * *

int main(){
    int n,row ,cols;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(row=1;row<=n;row++){
      for(cols=1;cols<=row;cols++){
        cout<<"*"<<" ";
      }
      cout<<endl;
    }
  return 0;
}
// -------------------------------------------------->
// 1 
// 2 2
// 3 3 3
// 4 4 4 4 
// 5 5 5 5 5

// int main(){
//     int n,row ,cols;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(row=1;row<=n;row++){
//       for(cols=1;cols<=row;cols++){
//         cout<<row<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
// /-------------------------------------------------->

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// int main(){
//     int n,row ,cols;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(row=1;row<=n;row++){
//       for(cols=1;cols<=row;cols++){
//         cout<<cols<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//----------------------------------------------->

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

// int main(){
//     int n,row ,cols;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(row=1;row<=n;row++){
//       for(cols=65;cols<=row+64;cols++){
//         cout<<(char)cols<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//--------------------------------------------->

// A
// B B
// C C C
// D D D D 
// E E E E E

// int main(){
//     int n,row ,cols;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(row=1;row<=n;row++){
//       for(cols=1;cols<=row;cols++){
//         cout<<(char)(row+64)<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
 
