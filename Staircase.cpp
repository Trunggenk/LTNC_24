//
// Created by Trung on 2/27/2024.
//
#include "all.h"
using namespace std;

void staircase(int n)
{
    for(int i =0 ; i=n ; i++) {
        for (int j = -n; j = -1; j++) {
            if (j > i - n-1) cout << " ";
            if (j <= j - n-1) cout << "#";
        }
        cout<<endl;
    }
}

int main()
{
    staircase(4);
}