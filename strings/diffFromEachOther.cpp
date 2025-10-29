#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;

    cout<<"Enter String ";
    cin>>str;
    cout<<str;
    int i = 0;
    int count = 0;
    if(str.length()==0)return 0;
    while(str[i]!='\0')
    {
        if(i==0)
        {
            if(str[i+1]!=str[i])
            {
                count++;
            }
        }
        else
        {
            if(str[i-1]!=str[i] && str[i+1]!=str[i])
            {
                count++;
            }
            
        }
        i++;
    }
    cout<<"TOtal different character from each other is : "<<count;
}