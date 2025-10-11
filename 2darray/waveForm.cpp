#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    // Matrix is : =
    cout<<"Matrix is :- "<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Wave form matrix is: ";
    cout<<endl;
  // Wave form printing 
    for(int i=0;i<3;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<3;j++)
            {
            cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
        else{
         for(int k=2;k>=0;k--)
            {
            cout<<arr[k][i]<<" ";
            }
        cout<<endl;
        }
    }
}