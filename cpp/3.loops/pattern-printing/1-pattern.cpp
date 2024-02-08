#include<iostream>
using namespace std;

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

int main(){
  int m,n;
  cout<<"Enter the no of rows : ";
  cin>>m;
    for(int row=1;row<=m;row++){
      for(int cols=1;cols<=m;cols++){
        cout<<"*"<<" ";
      }
      cout<<endl;
    }
  return 0;
}
//------------------------------------------->

// * * * * *
// * * * * *
// * * * * *

// int main(){
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//   cout<<"Enter the no of columns : ";
//   cin>>n;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=n;cols++){
//         cout<<"*"<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//----------------------------------------------->

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// int main(){
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//   for(int row=1;row<=m;row++){
//     for(int cols=1;cols<=m;cols++){
//       cout<<cols<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }
// --------------------------------------------->

// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

// int main(){
//     int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//   for(int row=1;row<=m;row++){
//     for(int cols=1;cols<=m;cols++){
//       cout<<row<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }
//------------------------------------------->

// A A A A
// B B B B
// C C C C
// D D D D

// change (row+64) into (cols+64) for this pattern.

// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

// int main(){
//   int m,n;
//   // int a=65;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//   // for(int row=1;row<=m;row++){
//   //   for(int cols=1;cols<=m;cols++){
//   //     cout<<(char)a<<" ";
//   //   }
//   //   a++;
//   //   cout<<endl;
//   //}
//   for(int row=1;row<=m;row++){        //(int row=65;row<=m+64;row++)
//     for(int cols=1;cols<=m;cols++){
//       cout<<(char)(row+64)<<" ";      // (char)row or cols 
//     }
//     cout<<endl;
//   }  
//   return 0;
// }