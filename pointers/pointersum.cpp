#include<iostream>
using namespace std;

int main()
{
    //  int x ,y ;

    //  cout<<"enter the value of x ";
    //  cin>>x;

    //  cout<<"Enter the value of y ";
    //  cin>>y;

    //  int *p = &x;
    //  int *p1 = &y;
    //  cout<<"sum of two number is : "<<*p+*p1<<endl;


    int x;
    int *p = &x;
    cout<<"Enter the value of x : ";
    cin>>*p;  // Taking input using pointer 

    int y ;
    int *p1 = &y;
    cout<<"Enter the value of y : ";
    cin>>*p1;  // Taking the input of y using pointer 

    cout<<"sum of two number is : "<<*p1 + *p<<endl;
}