#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter num of rows";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++){
           cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

// pattern
//     *
//    **
//   ***
//  ****