#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

int main()
{
     string s = "Nitesh is a data    scientist";

     stringstream ss(s);

     string temp;

     while(ss>>temp)
     {
        cout<<temp<<endl;
     }


}