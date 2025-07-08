#include<iostream>
using namespace std;

int main(){
   
    int x = 122;
    int *p = &x;

    // * (star operator) -> ye ek derefrence operator hai

    cout<<*p<<endl;  // yaha *p print karane ka matlab hai ki aap jo pointer variable p me jo address store hai us address mein jakar uska value print kar do 
    cout<<x;
    cout<<endl;

    x = 100;
     cout<<*p<<endl;
     

    *p = 115;

    cout<<x<<endl;



}