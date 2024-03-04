#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int *arr[n];
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        arr[i] = new int[m];
        for(int j = 0; j < m; j++)
        {
            cin >> *(arr[i]+j);
        }
    }

    for(int i =1 ; i<=q ; i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<*(arr[x]+y)<<endl;;
    }

    for(int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    return 0;
}

