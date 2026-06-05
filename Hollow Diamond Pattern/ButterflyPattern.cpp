#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        //for special character
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        //for space
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        // for space
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        //for Special character
        for(int j=0;j<i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
    for(int i=0;i<n+n+2;i++){
        cout<<"*";
    }
    cout<<endl;
        for(int i=0;i<n+n+2;i++){
        cout<<"*";
    }
    cout<<endl;

    for(int i=1;i<=n;i++){
        // for special character
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        //for space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // for space 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // for speciaL character
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}