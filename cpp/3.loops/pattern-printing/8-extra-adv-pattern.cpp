#include<iostream>
using namespace std;

//         *
//       * * *
//     * * * * * 
//   * * * * * * *
// * * * * * * * * *

// int main()
// {
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m-row;cols++){
//         cout<<" "<<" ";
//       }
//       for(int cols=1;cols<=row;cols++){
//         cout<<"*"<<" ";
//       }
//       for(int cols=1;cols<=row-1;cols++){
//         cout<<"*"<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//-------------------------------------------------->

//         1
//       2 2 2
//     3 3 3 3 3 
//   4 4 4 4 4 4 4
// 5 5 5 5 5 5 5 5 5

// int main()
// {
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m-row;cols++){
//         cout<<" "<<" ";
//       }
//       for(int cols=1;cols<=row;cols++){
//         cout<<row<<" ";
//       }
//       for(int cols=1;cols<=row-1;cols++){
//         cout<<row<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//------------------------------------------->

//         A
//       B B B
//     C C C C C
//   D D D D D D D 
// E E E E E E E E E

// int main()
// {
//   int m,n;
//   cout<<"Enter the no of rows : ";
//   cin>>m;
//     for(int row=1;row<=m;row++){
//       for(int cols=1;cols<=m-row;cols++){
//         cout<<" "<<" ";
//       }
//       for(int cols=1;cols<=row;cols++){                     
//         cout<<(char)(row+64)<<" ";
//       }
//       for(int cols=1;cols<=row-1;cols++){
//         cout<<(char)(row+64)<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;
// }
//--------------------------------------------------->

//         *
//       * * *
//     * * * * * 
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * * 
//       * * *
//         *

int main()
{
  int m,n;
  cout<<"Enter the no of rows : ";
  cin>>m;
    for(int row=1;row<=m;row++){
      for(int cols=1;cols<=m-row;cols++){
        cout<<" "<<" ";
      }
      for(int cols=1;cols<=row;cols++){                     
        cout<<"*"<<" ";
      }
      for(int cols=1;cols<=row-1;cols++){
        cout<<"*"<<" ";
      }
      cout<<endl;
    }
    for(int row=1;row<m;row++){
      for(int cols=1;cols<=row;cols++){
        cout<<" "<<" ";
      }
      for(int cols=1;cols<=m-row;cols++){                     
        cout<<"*"<<" ";
      }
      for(int cols=1;cols<=m-row-1;cols++){ 
        cout<<"*"<<" ";
      }
      cout<<endl;
    }
  return 0;
}