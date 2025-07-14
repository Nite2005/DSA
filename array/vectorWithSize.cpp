#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(5); //intial size = 5 iska matlab ki 5 size capacity ka vector create ho gya with value 0 ;
    vector<int>v(5,7);//intial size = 5 and each element has value = 7

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);


    for(int i=1;i<v.size();i++)
    {
        cout<<v[i];
    }







}