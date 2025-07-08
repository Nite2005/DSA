#include<iostream>
using namespace std;

void give_last_first(int n,int *first_digit,int *last_digit)
{
    *last_digit = n%10;
    n = n/10;
    int digit;
    while(n>9)
    {
         digit = n%10;
        
        n = n/10;
    }
    *first_digit = digit;
}


int main(){
   int n = 22325;
   int first_digit, last_digit;

   give_last_first(n,&first_digit,&last_digit);
   cout<<first_digit<<" "<<last_digit;
}