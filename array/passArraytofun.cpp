#include<iostream>
using namespace std;


// array ko agar function mein bhejte h toh wo pass by reference ki tarah jata h

// jab bhi array ko function mein pass karte h tab array pointer ki tarah behave karta h aur wo original array mein change kar deta h ;

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}

// both display1 and display working same it  prove array is a pointer on passing into function
void display1(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void change(int b[],int size)
{
    b[0]=100;
}


 int main()
{
    int arr[] = {1,2,3,4};

    int size = sizeof(arr)/sizeof(arr[0]);
    // display(arr,size);
    // change(arr,size);
    // display(arr,size); 

    cout<<*arr<<endl;

}

// arr = &arr[0] vvi