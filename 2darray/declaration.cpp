#include<iostream>
using namespace std;

int main()
{
    int n,m;
    n = 2,m=2;
    int arr[n][m];
    // following declaration are correct
    // int arr[n][m] = {1,2,3,4};
    // int arr[n][m] = {{1,2},{3,4}};
    // int arr[][m] = {1,2,4,5} 
    // following are wrong
    // int arr[n][m] = {1,2,4,5}
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<< " " ;
        } 
        cout<<endl;
    }



}