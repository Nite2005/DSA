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

void sortPosandNeg(vector<int>&v)
{
    int n = v.size();
    int start= 0;
    int end = n-1;
    while(start<end)
    {
         if(v[start]>0 && v[end]<0)
         {
            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            start++;
            end--;
         }
         if(v[start]<0)
         {
            start++;
         }
         if(v[end]>0)
         {
            end--;
         }
    }
    display(v);


}




int main()
{
    vector<int>v;

    v.push_back(-1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(-2);
    v.push_back(9);
    v.push_back(-4);
    display(v);
    sortPosandNeg(v);


}