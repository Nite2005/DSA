#include<iostream>
using namespace std;


void swap1(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return ;
}
int main()
{

    int a = 4;
    int b = 3;

    swap1(&a,&b);
    cout<<a<<" "<<b;


}