#include<iostream>
#include<vector>
using namespace std;

void reversePartofArray(vector<int>&v,int i , int j)
{
    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
void reverse(vector<int>&v)
{
    int i=0;
    int j=v.size()-1;

    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void insertElement(vector<int>&v,int size){
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
}

void display(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}


int main()
{
    int k;
    cout<<"Enter step to rotate the array: ";
    cin>>k;
    
    int n ;
    cout<<"Enter size of array: ";
    cin>>n;
     
    if(k>n){
        k=k%n;
    }

    vector<int>v;
    cout<<"Enter elements";
    insertElement(v,n);

    reversePartofArray(v,0,n-k-1);
    reversePartofArray(v,n-k,n-1);
    reverse(v);
    display(v);

     
}