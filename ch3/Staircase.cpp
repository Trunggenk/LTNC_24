//
// Created by Trung on 2/27/2024.
//
#include "../all.h"
using namespace std;

void staircase(int n)
{
    for(int i=1; i<=n ; i++) {
        for (int j=1; j <=n; j++) {
            if (j > -i + n) cout << "#"; else cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    staircase(4);
}