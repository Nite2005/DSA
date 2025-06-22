#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Rows";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
             cout<<char(64+j);
        }
        cout<<endl;
    }
}

// pattern
// ABCD
// ABCD
// ABCD
// ABCD