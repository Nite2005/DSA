#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;


int main()
{
     string str;
     getline(cin,str);

     stringstream ss(str);
     vector<string>v;
    string temp;
     while(ss>>temp)
     {
        v.push_back(temp);
     }
     sort(v.begin(),v.end());
     int count = 1;
     int max = 0;
     string word;
     for(int i=0;i<v.size()-1;i++)
     {
        if(v[i]==v[i+1])
        {
            count++;
        }
        else
        {
            if(max<count)
            {
                max = count;
                count=1;
                word = v[i];
            }
        }
     }

     cout<<"Most Occuring word is : "<<word<<"  count of word is : "<<max<<endl;
}