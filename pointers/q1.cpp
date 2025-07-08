#include<iostream>
using namespace std;

int main(){
    int a = 4;//after inc-> 6
    int *ptr = &a;

    int b = (*ptr)++;//4 ans
    int c = ++(*ptr);//6 ans

    cout<<a<<" "<<b<<" "<<c<<endl;
}