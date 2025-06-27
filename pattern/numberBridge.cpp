#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter number of Rows";
     cin>>n;

    int nsp = 1;
    for(int i =1;i<=2*n-1;i++)
    {
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {   int counter =1;
        for(int j=1;j<=n-i;j++)
        {
            cout<<counter;
            counter+=1;
        }
        for(int k=1;k<=nsp;k++)
        {
            cout<<" ";
            counter+=1;
        }
        nsp+=2;
        for(int l=1;l<=n-i;l++)
        {
            cout<<counter;
            counter+=1;
        }
        cout<<endl;
    }
}