#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>v)
{ 

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }   

    cout<<endl;
}

void reversePartofArray(vector<int>&v,int i , int j)
{
    if(j == v.size())
    {
        j=j-1;
    }

    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}


int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int>v;


    cout<<"Enter the element: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }


    int x,y;
    cout<<"Enter the index of the array from where you want to begin your reverse operation: ";
    cin>>x;
    cout<<"Enter the index of the array where you want to end the array: ";
    cin>>y;



    cout<<"Your array : ";
    display(v);
    reversePartofArray(v,x,y);
    display(v);



     
}