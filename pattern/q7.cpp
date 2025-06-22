#include<iostream>
using namespace std;

int main()
{ 
    int n;
    cout<<"Enter num of Rows: ";
    cin>>n;

    // for(int i=1;i<=n;i++)
    // {   int k = 1;
    //     for(int j=1;j<=i;j++)
    //     {
    //          cout<<k;
    //          k+=2;
    //     }
    //     cout<<endl;
    // }


    // second method 
    for(int i =1 ;i<=n;i++)
    {
        for(int j=1 ;j<=2*i-1;j+=2)
      {
        cout<<j;
      }
      cout<<endl;
    }


}


// // pattern
// 1
// 13
// 135
// 1357