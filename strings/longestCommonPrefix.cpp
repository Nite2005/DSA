#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
     vector<string>v{"flower","flow","flight"};

     sort(v.begin(),v.end());

     string first = v[0];
     string last = v[v.size()-1];

     string s="";

     for(int i=0;i<min(first.size(),last.size());i++)
     {
        if(first[i]==last[i])
        {
            s+=first[i];
        }
        else break;
     }

     cout<<s;
    
}