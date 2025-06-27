#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter number of Rows";
     cin>>n;

     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=2*n-(n-i+1);j++)
        {
            if(i+j>=n+1)
            {
                cout<<("*");
            }
            else{
               cout<<" ";
            }
        }
        cout<<endl;
     }
}



// pattern
//    *
//   ***
//  *****
// *******