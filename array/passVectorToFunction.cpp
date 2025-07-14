#include<iostream>
#include<vector>
using namespace std;


void changelocally(vector<int>v)//vectors are passed by value. Each time you pass , new vector is created;
{
    v[0] = 10;
}

void changeglobally(vector<int>&a)//vectors are passed by refrence. Each time you pass , new vector is created;
{
    a[0] = 10;
}


int main()
{
     vector<int>v;

     for(int i=0;i<4;i++)
     {
        int n;
        cin>>n;
        v.push_back(n);
     }
     changelocally(v);
    for(int i=0;i<4;i++)
     {
        cout<<v[i];
     }
     cout<<endl;

     changeglobally(v);
     for(int i=0;i<4;i++)
     {
        cout<<v[i];
     }

}