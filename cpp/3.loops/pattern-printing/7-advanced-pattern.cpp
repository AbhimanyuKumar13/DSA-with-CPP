#include<iostream>
using namespace std;

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// int main(){
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m; 
//     for(int row=1;row<=m;row++){
//       for(int col=1;col<=m-row;col++){
//         cout<<" "<<" ";
//       }
//       for(int cols=1;cols<=row;cols++){
//         cout<<"*"<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//-------------------------------------->

//         1
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5

// int main(){
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m; 
//     for(int row=1;row<=m;row++){
//       for(int col=1;col<=m-row;col++){
//         cout<<" "<<" ";
//       }
//       for(int cols=1;cols<=row;cols++){
//         cout<<cols<<" "; // you can print cols
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//------------------------------------->

  // * 
  //   * * 
  //     * * * 
  //       * * * * 
  //         * * * * * 

// int main(){
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m; 
//     for(int row=1;row<=m;row++){
//       for(int col=1;col<=row;col++){
//         cout<<" "<<" ";
//       }
//       for(int cols=1;cols<=row;cols++){
//         cout<<"*"<<" "; 
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//----------------------------------->

//         * * * * * 
//       * * * * * 
//     * * * * * 
//   * * * * * 
// * * * * *

int main(){
  int m,n;
  cout<<"Enter the no of rows : ";
  cin>>m; 
    for(int row=1;row<=m;row++){
      for(int col=1;col<=m-row;col++){
        cout<<" "<<" ";
      }
      for(int cols=1;cols<=m;cols++){
        cout<<"*"<<" "; 
      }
      cout<<endl;
    }
  return 0;
} 