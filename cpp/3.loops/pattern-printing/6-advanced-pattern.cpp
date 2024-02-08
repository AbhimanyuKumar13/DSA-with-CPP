#include<iostream>
using namespace std;

// 1
// 0 1
// 10 1
// 0 10 1
// 10 10 1
// 0 10 10 1
// 10 10 10 1
// 0 10 10 10 1
// 10 10 10 10 1
// 0 10 10 10 10 1

int main(){
  int m;
  cout<<"Enter the no of rows : ";
  cin>>m; 
    for(int row=1;row<=m;row++){
      for(int cols=1;cols<=row;cols++){ 
        if((row+cols)%2==0){
          cout<<"1";
        }
        else{
          cout<<"0"<<" ";
        }
      }
      cout<<endl;
    }
  return 0;
}
//-------------------------------------->

//       *
//       *
//       *
// * * * * * * *
//       *
//       *
//       *

// int main(){
//     int row,cols,m;
//     cout<<"Enter the value of row(n) ; ";
//     cin>>m;
//     for(row=1;row<=m;row++){
//       for(cols=1;cols<=m;cols++){
//         if(row==m/2+1 || cols==m/2+1){
//         cout<<"*"<<" "; 
//         }
//         else{
//           cout<<" "<<" ";
//         }
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//---------------------------------->

// * * * * * * * *
// *             *
// *             *
// *             *
// * * * * * * * *

//  int main(){
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//   cout<<"Enter the no of columns : ";
//   cin>>n;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=n;cols++){
//         if(row==1 || cols==1 || row==m || cols==n)
//         cout<<"*"<<" ";
//         else{
//           cout<<" "<<" ";
//         }
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//------------------------------------>

// *   *   * 
//   *   *   
// *   *   * 
//   *   *   
// *   *   * 

//  int main(){
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m; 
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m;cols++){
//         if((row+cols)%2==0)
//         cout<<"*"<<" ";
//         else{
//           cout<<" "<<" ";
//         }
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//------------------------->

// *       *
//   *   *
//     *
//   *   *
// *       *

//  int main(){
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m; 
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m;cols++){
//         if(row==cols || row+cols==m+1){
//            cout<<"*"<<" ";
//         }
//         else{
//           cout<<" "<<" ";
//         }
//       }
//       cout<<endl;
//     }
//   return 0;
// }
