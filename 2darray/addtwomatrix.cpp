#include<iostream>
using namespace std;

int main()
{
    int arr[2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    int brr[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>brr[i][j];
        }
    }
    int sum[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum[i][j] = arr[i][j] + brr[i][j];

        }
    }


    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    
    


}