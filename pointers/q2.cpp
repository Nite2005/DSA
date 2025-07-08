#include<iostream>
using namespace std;

void give_last_first(int n,int *first_digit,int *last_digit)
{
    *last_digit = n%10;
    n = n/10;
    while(n>9)
    {
        int digit = n%10;
        *first_digit = digit;
        n = n/10;
    }
}


int main(){
   int n = 22325;
   int first_digit, last_digit;

   give_last_first(n,&first_digit,&last_digit);
   cout<<first_digit<<" "<<last_digit;
}