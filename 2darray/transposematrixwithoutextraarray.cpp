#include<iostream>
using namespace std;

void swap( int (&arr)[3][3],int i, int j)
{
    int temp = arr[i][j];
    arr[i][j] = arr[j][i];
    arr[j][i] = temp; 
}

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
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

     cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i!=j)
            {
               swap(arr,i,j);
            }
        }
    }


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
}