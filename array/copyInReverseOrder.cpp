#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;

    vector<int>v;
    vector<int>reverse_v;
    cout<<"Enter the element of array :";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }

    for(int j=n-1;j>=0;j--)
    {
        reverse_v.push_back(v[j]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<reverse_v[i]<<" ";
    }
}