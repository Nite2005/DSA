#include<iostream>
#include<string>
using namespace std;

int main()
{
     string str = "Nitesh is learning Data Science";
     cout<<str;
     cout<<endl;

     string str1; 
    //  cin>> str1;// Hi This side Nitesh what about you input

    // cout<<str1; // Outpur- Hi only 

    getline(cin, str1);//Hi this side nitesh , What about you - input

    cout<<str1;// Hi this side nitesh , What about you - output


}