#include<iostream>
using namespace std;

void hcf(int a,int b){
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<i<<" ";
            break;
        }
    }
}


int main()
{ 
    int a;
    int b;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;

    hcf(a,b);
}