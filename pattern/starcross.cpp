#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"enter number of rows";
     cin>>n;
     
     for(int i=1 ;i<=n;i++)
     {
        for(int j=1;j<=n;j++)
        {
            // method 1
            // if(j==i || j == n+1-i)
            // {
            //     cout<<"*";
            // }
            // else{
            //     cout<<" ";
            // }

            // method 2

            if(i==j || i+j == n+1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
     }
}


// // pattern
// *   *
//  * * 
//   *
//  * *
// *   *