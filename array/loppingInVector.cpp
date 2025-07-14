/* Find the last occurence of x in the array*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    int size = 6;
    int n;
    cin>>n;


    for(int i=0;i<size;i++)
    {
        int x;
        cout<<"Enter element for index ",i;
        cin>> x;
        v.push_back(x);
    }

    int index = -1;

    for(int i=size-1;i>=0;i--)
    {
        if(v[i]==n)
        {
            index = i;
            break;
        }

    }

    

    cout<<"the last occurence of number is : "<<index<<endl;
}