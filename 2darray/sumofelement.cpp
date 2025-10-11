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

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum = sum + arr[i][j];
        }
    }
    cout<<"sum is : "<<sum;


}