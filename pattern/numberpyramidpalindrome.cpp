#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter number of Rows";
    cin>>n;

   for(int i=1;i<=n;i++)
   {
    for(int l=1;l<=n-i;l++)
    {
        cout<<" ";
    }

    for(int j=1;j<=i;j++)
    {
        cout<<j;
    }
    for(int k=i-1;k>=1;k--)
    {
        cout<<k;
    }
    cout<<endl;
   }
}



// // pattern
//    1
//   121
//  12321
// 1234321