#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> vectorA;
    for(int i =0 ; i< n ; i++)
    {
        int temp;
        cin>>temp;
        vectorA.push_back(temp);
    }
    sort(vectorA.begin(),vectorA.end());

    for(int i =0 ; i<n ; i++)
    {
        cout<<vectorA[i]<<" ";
    }

}