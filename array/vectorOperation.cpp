#include<iostream>
#include<vector>
using namespace std;

int main()
{
     vector<int>v;

     v.push_back(4);//iska matlab hai ki vector ke last me element add karna aur capacity bhi increase hota h 
     v.push_back(5);
     v.push_back(9);
     v.push_back(10);
     v.pop_back();//iska matlab hai ki vector ke last element ko remove karna lekin isme capacity decrease nhi hota h kewal size increase aur decrease hota hai 


}