#include<iostream>
using namespace std;

int main()
{

    int n,m;
    cout<<"Enter number of Rows: ";
    cin>>n;
    cout<<"Enter number of column: ";
    cin>>m; 
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
     }
}


// pattern 
// *****
// *****
// *****