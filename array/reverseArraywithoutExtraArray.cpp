#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int>v;//intialization of vector
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);//inserting element into the vector
    }

    //we are using two pointer to reverse an array 


    int start = 0;
    int end = n-1;

    // while(start<=end)
    // {
    //     int temp = v[start];
    //     v[start] = v[end];
    //     v[end] = temp;

    //     start++;
    //     end--;
    // }


    for(int i=0,j=n-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}