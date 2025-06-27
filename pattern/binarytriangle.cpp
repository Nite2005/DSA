#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of rows";
    cin>>n;
    char curr = '1';
    char prev = '0';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0){
                    cout<<'1';
                }
                else{
                    cout<<'0';
                }
            }
            else{
                if(j%2!=0){
                    cout<<'1';
                }
                else{
                    cout<<'0';
                }
            }
        }
        cout<<endl;
    }
}

// pattern
// 1
// 01
// 101
// 0101
// 10101