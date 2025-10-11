#include<iostream>
using namespace std;

int main()
{   int n1,m1,n2,m2;
    cout<<"Enter the first matrix rows and columns";
    cin>>n1>>m1;
    int arr[n1][m1];
    cout<<"Enter the second matrix rows and columns";
    cin>>n2>>m2;
    int brr[n2][m2];

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cin>>brr[i][j];
        }
    }
    
    cout<<"First Matrix"<<endl;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Second Matrix"<<endl;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Final Multiplication matrix is : "<<endl;

    if(m1==n2)    
    {    int ans[n1][m2];

        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
                int sum =0;
                for(int k=0;k<n2;k++)
                {
                    sum = sum +  arr[i][k]*brr[k][j];
                }
                ans[i][j] = sum;

            }
        }

        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Multiplication is not possible,There  first matrix column size and second matrix row size must be equal ";
    }
}