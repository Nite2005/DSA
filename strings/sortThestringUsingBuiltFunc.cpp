#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str ;
    cout<<"Enter the string: ";
    cin>>str;

    sort(str.begin(),str.end());
    cout<<str;
}