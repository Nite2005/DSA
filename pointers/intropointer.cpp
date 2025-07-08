#include<iostream>
using namespace std;

int main()
{
    int x = 4;
    int *p = &x; //pointer store address of variable
     
    float y = 5;
    // int *p1 = &y; //It through error because the address of variable data type different from pointer data type
    float *p1 = &y;
    

    cout<<&y<<endl;
    cout<<p1<<endl;

    cout<<&x<<endl;
    cout<<p<<endl;
}