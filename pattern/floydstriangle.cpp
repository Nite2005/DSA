#include<iostream>
using namespace std;

int main()
{ 
    int n; 
    cout<<"enter number of rows";
    cin>>n;
    int num=1;
    for(int i = 1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<num<<" ";
           num++;
        }
        cout<<endl;
    }
}

// pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10