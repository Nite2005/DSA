#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Nitesh is learning data science  ";
    cout<<"length function it not including null characters "<<str.length()<<endl;
    cout<<"size function it is not including null characters "<<str.size()<<endl;
    cout<<"push_back function"<<endl;
    str.push_back('h');
    cout<<"After push_back"<<str;
    cout<<"pop_back_fuction"<<endl;
    str.pop_back();
    cout<<"After pop_back"<<endl;
    cout<<str;
    cout<<str+"Hii I am adding machine learning"<<endl;
    // cout<<"Reverse function";
    // str.reverse();
    // cout<<str<<endl;
    cout<<str.substr(2);
    
}