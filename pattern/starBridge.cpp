#include<iostream>
using namespace std;

int main()
{ 
    int n;
    cout<<"Enter number of Rows:";
    cin>>n;
    int nsp = 1;
    for(int j=1;j<=2*n-1;j++)
    {
            cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++)
        {
            cout<<" ";
        }
        nsp+=2;
        for(int l=n-i;l>=1;l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}







// pattern
// *******
// *** ***
// **   **
// *     *