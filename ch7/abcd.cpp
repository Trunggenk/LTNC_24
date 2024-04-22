//
// Created by trung on 4/16/2024.
//
#include <iostream>
using namespace std;
#define FOR(i, n) for(int i =0 ; i<n ; i++)
int main()
{
    int n;
    cin>> n;
    char arr[n];
    FOR(i,n)
    {
        cin>>arr[i];
    }

    FOR(i,n) {
        FOR(j, n)FOR(k, n)FOR(m, n) {
                    cout << arr[i] << arr[j] << arr[k] << arr[m] << endl;
                }

    }
    }
