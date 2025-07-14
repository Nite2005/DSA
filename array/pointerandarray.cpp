#include<iostream>
using namespace std;

void display(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[] = {1,2,3,4};

    int *ptr = arr;
    // cout<<ptr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*ptr<<endl;//pointing the first element
    // cout<<ptr[0]<<endl;

    // for(int i=0;i<4;i++)
    // {
    //     cout<<ptr[i]<<" ";
    // }
    // cout<<endl;
    // display(arr,4);

    // for(int i=0;i<=4;i++)
    // {
    //     cout<<*ptr<<" ";
    //     ptr++;//iska matlab hai ki agla adress agar x100 hai toh ptr++ karne par x104 aur agar char array hota toh x101 hota 
    //     //isse basically ye pta chalta hai ki data type ke size ke hisab se increment hota h 
    // }

    // *ptr = 9;//pointing first element;
    // ptr++;//now pointing second element;
    // *ptr = 8;
    // ptr--;//again pointing first element;

    // display(arr,4);

    for(int i=0;i<4;i++)
    {
        // cout<<i[ptr]<<" ";
        cout<<i[arr]<<" ";
    }



    

}