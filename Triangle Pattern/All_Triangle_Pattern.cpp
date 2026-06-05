// !! All the pattern are Commented ,Uncomment to Use !!

#include<iostream>
using namespace std;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//Inverse Triangle of Star

// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

// Triangle of Star 

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

// Triangle with Numbers

// int main(){
//     int n=7;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

// Triangle with Letters

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         char letter ='A';  //A=65 in ASCII
//         for(int j=0;j<i;j++){
//             cout<<letter<<" ";
//             letter++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

// Reverse Triangle Pattern 

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>0;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

// Floyd's Triangle Pattern 

// int main(){
//     int n=5;
//     int number=1;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<number<<" ";
//             number++; 
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//Inverted Triangle Pattern

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

// Pyramid Triangle Pattern 

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" "<<" ";
        }

        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }

        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}