#include<iostream>
#include<vector>
using namespace std;

vector<int>merge(vector<int>v1, vector<int>v2)
{
    int i=0;
    int j=0;
    int k=0;
    int n=v1.size();
    int m=v2.size();
    vector<int>ans(m+n);

    while(i<=n-1 && j<=m-1)
    {
        if(v1[i]<v2[j])
        {
            ans[k] = v1[i];
            i++;
        }
        else
        {
            ans[k] = v2[j];
            j++;
        }
        k++;
    }

    if(i>=n)
    {
    while( j<=m-1)
    {
        ans[k] = v2[j];
        j++;
        k++;

    }
   }
   if(j>=m)
   {
     while(i<=n-1)
     {
        ans[k]=v1[i];
        i++;
        k++;
     }
   }
    return ans;
}

void display(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    vector<int>v1;
    vector<int>v2;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(8);
    display(v1)
;    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
   display(v2);
   
   vector<int>result = merge(v1,v2);

   display(result);
    
}