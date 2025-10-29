#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string>v({"0123","0023","456","00182","940","2901"});
    int max=INT8_MIN;
    for(int i=0;i<v.size();i++)
    {
        int x = stoi(v[i]);
        if(max<x)
        {
            max = x;
        }
    }

    cout<<"Maximum number is : "<<max;




}