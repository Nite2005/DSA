#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the target ; ";
    cin>>n;

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    vector<int>v;

    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    

    for(int i=0;i<=size-2;i++)
    {
        for(int j=i+1;j<=size-1;j++)
        {
            if(v[i]+v[j] == n)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}