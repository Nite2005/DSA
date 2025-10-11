#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void method1(vector<int> &v)
{
    int noz = 0;
    int noo = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            noz++;
        else
            noo++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
            v[i] = 0;
        else
            v[i] = 1;
    }

    display(v);
}

void method2(vector<int> &v)
{
    int n = v.size();

    int start = 0;
    int end = n - 1;
    while (start < end)
    {

        // if (v[start] == 0)
        //     start++;
        // if (v[end] == 1)
        //     end--;
        // if(start>end) break;
        // if (v[start] == 1 && v[end] == 0)
        // {
        //     v[start]=0;
        //     v[end] = 1;
        //     start++;
        //     end--;
        // }

         if (v[start] == 1 && v[end] == 0)
        {
            v[start]=0;
            v[end] = 1;
            start++;
            end--;
        }
         if (v[start] == 0)
            start++;
        if (v[end] == 1)
            end--;


    }
    display(v);
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    display(v);
    // method1(v);
    method2(v);
}