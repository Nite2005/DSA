#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter rows of matrix";
    cin>>n;
    cout<<"Enter col of matrix:";
    cin>>m;
    int arr[n][m];

     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
     }

     cout<<"Your Matrix is :-"<<endl;
     
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

     int minr=0;
     int minc=0;
     int maxr=n-1;
     int maxc=m-1;

    //  for(int i=0;i<n;i++)
    //  {
    //      //Right
    //      for(int j=minc;j<=maxc;j++)
    //      {
    //         cout<<arr[minr][j]<<" ";
    //      }
    //      minr++;
    //      //Down
    //      for(int j=minr;j<=maxr;j++)
    //      {
    //         cout<<arr[j][maxc]<<" ";
    //      }
    //      maxc--;
    //      //left
    //      for(int j=maxc;j>=minc;j--)
    //      {
    //         cout<<arr[maxr][j]<<" ";
    //      }
    //      maxr--;
    //      //up
    //      for(int j=maxr;j>=minr;j--)
    //      {
    //         cout<<arr[j][minc]<<" ";
    //      }
    //      minc++;
    //  }

    while(minr<=maxr && minc<=maxc)
    {
        //  Right
        if(minr>maxr || minc>maxc)break;
         for(int j=minc;j<=maxc;j++)
         {
            cout<<arr[minr][j]<<" ";
         }
         minr++;
         if(minr>maxr || minc>maxc)break;
         //Down
         for(int j=minr;j<=maxr;j++)
         {
            cout<<arr[j][maxc]<<" ";
         }
         maxc--;
         if(minr>maxr || minc>maxc)break;
         //left
         for(int j=maxc;j>=minc;j--)
         {
            cout<<arr[maxr][j]<<" ";
         }
         maxr--;
         if(minr>maxr || minc>maxc)break;
         //up
         for(int j=maxr;j>=minr;j--)
         {
            cout<<arr[j][minc]<<" ";
         }
         minc++;
    }

}