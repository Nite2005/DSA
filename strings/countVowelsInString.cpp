#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cout<<str<<endl;
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        
    }

    cout<<"The total number of vowels in this string  "<<str<<" is: "<<count;

}