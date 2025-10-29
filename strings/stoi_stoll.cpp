#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "1234542342342343243242";
    // int x = stoi(str);
    long long x = stoll(str);
    cout<<x;
    
    int a = 123454;

    string s = to_string(a);
    cout<<s;
}