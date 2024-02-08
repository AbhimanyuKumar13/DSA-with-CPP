#include<iostream>
using namespace std;
 
//1
//A B
//1 2 3
//A B C D
//1 2 3 4 5

// int main(){
//   int m;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=row;cols++){
//          if(row%2==0){
//           cout<<(char)(cols+64)<<" ";
//          }
//          else{
//           cout<<cols<<" ";
//          }
//       }
//       cout<<endl;
//     }

//   return 0;
// }
//------------------------------------------->

// 1 2 3 4 5 
// A B C D 
// 1 2 3 
// A B 
// 1 

// int main(){
//   int m;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m-row+1;cols++){
//          if(row%2==0){
//           cout<<(char)(cols+64)<<" ";
//          }
//          else{
//           cout<<cols<<" ";
//          }
//       }
//       cout<<endl;
//     }

//   return 0;
// }
//--------------------------------------->
// 4
// 4 3
// 4 3 2
// 4 3 2 1

// int main(){
//   int m;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=row;cols++){
//          cout<<m-cols+1<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//-------------------------------------------->

// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

int main(){
  int m;
  cout<<"Enter the no of rows : ";
  cin>>m;
    for(int row=1;row<=m;row++){
      for(int cols=1;cols<=row;cols++){
         cout<<m-row+1<<" ";
      }
      cout<<endl;
    }
  return 0;
}