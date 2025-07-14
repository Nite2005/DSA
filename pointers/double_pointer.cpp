#include<iostream>
using namespace std;

int main(){
     int x =5;
     int *p = &x;
     int **pt = &p;//used to store address of single pointer
     int ***ptr = &pt; //used to store address of double pointer

     cout<<*p<<endl;
     cout<<**pt<<endl;
     cout<<*pt<<endl;
     cout<<***ptr<<endl;
     cout<<**ptr<<endl;
}
