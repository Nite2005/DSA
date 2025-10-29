#include<iostream>
#include<string>
using namespace std;


int main()
{ 
    string str1 = "Nitesh";

    for(int i=0;str1[i]!='\0';i++)
    {
        if(i%2==0)
        {
            str1[i]='a';
        }
    }

    cout<<str1;
}