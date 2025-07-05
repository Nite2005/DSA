#include<iostream>
using namespace std;

int fact(int n){
    int fac=1;
     
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}

int combination(int n,int r){
    int nfact = fact(n);
    int nminusrfact = fact(n-r);
    int rfact = fact(r);
    return nfact/(rfact*nminusrfact);
}



int main()
{
    int n;
    cout<<"Enter Number of rows";
    cin>>n;
   

    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
       {
          cout<<" ";
       }
        for(int j=0;j<=i;j++)
        {
          cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}