//
// Created by Trung on 3/4/2024.
//
#include "../all.h"

int main()
{
    int n;
    cin>>n;
    int a[n];
    int fa[101];
    int b[n+1];
    int fb[101];
    for(int m=0; m<101; m++)
    {
        fa[m]=0;
        fb[m]=0;
    }
    for(int i = 0 ; i< n ; i++) {
        cin >> a[i];
        fa[a[i]]++;
    }
    for(int j = 0 ; j<n+1 ; j++) {
        cin >> b[j];
        fb[b[j]]++;
    }
    for(int m=0; m<101; m++ )
    {
        if(fa[m]!=fb[m]) {
            cout << m;
            return 0;
        }
    }
}