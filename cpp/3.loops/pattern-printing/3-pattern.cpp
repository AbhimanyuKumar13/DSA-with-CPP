#include<iostream>
using namespace std;
 

// * * * * *
// * * * *
// * * *
// * *
// *

int main(){
  int m;
  cout<<"Enter the no of rows : ";
  cin>>m;
    for(int row=1;row<=m;row++){
      for(int cols=1;cols<=m-row + 1;cols++){
        cout<<"*"<<" ";
      }
      cout<<endl;
    }
  return 0;
}
//---------------------------------------->

// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4 
// 5

// int main(){
//   int m;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m-row + 1;cols++){
//         cout<<row<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//------------------------------------------>

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// int main(){
//   int m;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m-row + 1;cols++){
//         cout<<cols<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//---------------------------------------------->

// A A A A A
// B B B B 
// C C C
// D D
// E

// int main(){
//   int m;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m-row + 1;cols++){
//         cout<<(char)(row+64)<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//---------------------------------------------->

// A B C D E
// A B C D
// A B C
// A B
// A

// int main(){
//   int m;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m-row + 1;cols++){
//         cout<<(char)(cols+64)<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }