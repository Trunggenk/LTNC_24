//
// Created by trung on 3/14/2024.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n ;
    cin>>n;
    vector<int> vector1;
    for(int i = 0 ; i< n ; i++)
    {
        int temp;
        cin>>temp;
        vector1.push_back(temp);
    }
    int Q;
    cin>>Q;
    sort(vector1.begin(), vector1.end());
    for(int i =1 ; i<=Q ; i++)
    {
        int Y;
        cin>>Y;

        vector<int>:: iterator low; // low la con tro
        low = lower_bound(vector1.begin(), vector1.end(), Y);
        int position = low - vector1.begin();
        if(Y == vector1[position])
        {
        cout<<"YES"<<" "<<position;
        }
        else

        {
            cout<<"NO"<<" " <<position+1;
        }

    }

    return 0;
}
