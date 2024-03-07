//
// Created by Trung on 2/22/2024.
//
#include "../all.h"
using namespace std;
int main()
{
    int const n =1000;
    int array[n];
    int NumberofElements;
    cin>>NumberofElements;
    for (int i = 0 ; i<NumberofElements;i++)
    {
        cin>>array[i];
    }
    for (int i = NumberofElements-1;i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
}