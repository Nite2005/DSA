#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string";
    cin>>s;

    sort(s.begin(),s.end());
    int max = INT16_MIN;
    char max_var;
    int count =0;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else{
            if(max<count)
            {
                max=count;
                max_var=s[i-1];
                count=0;
            }
        }
        i++;
    }
    cout<<"Most occuring character is: "<<max_var<<" Count is : "<<max;
}