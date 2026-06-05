#include<iostream>
using namespace std;
//==================================================================================//
// for Special character Square Pattern 

// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*"<<" "; // You can replace '*' with any character you want to use for the pattern
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//=======================================================================================//
// For Letter Square Pattern

// int main(){
//     int n;
//     cout<<"Enter the number of Letters = ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         char letter='A';
//         for(int j=0;j<n;j++){
//             cout<<letter<<" ";
//             letter++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//=================================================================================//
// Continuous Numbers Pattern 
int main(){
    int n =4; //user input
    int number=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    return 0;
}

