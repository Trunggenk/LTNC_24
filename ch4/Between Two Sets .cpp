#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getGCD(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int getLCM(int a, int b) {
    return a * (b / getGCD(a, b));
}

int getTotalX(vector<int> a, vector<int> b) {
    int lmcA=a[0];
    for( int i =1; i<a.size(); i++)
    {
        lmcA= getLCM(lmcA,a[i]);
    }
    int gcdB=b[1];
    for(int i =1 ; i< b.size(); i++)
    {
        gcdB = getGCD(gcdB,b[i]);
    }
    int count =0;
    for(int i= lmcA , j=2 ; i<gcdB ; i=j*lmcA, j++ )
    {
        if(gcdB % i == 0)
        {
            count ++;
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0, j = 10; i < 10 && j > 0; ++i, --j) {
        cout << "i: " << i << ", j: " << j << endl;
    }
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int result = getTotalX(a, b);
    cout << result << endl;
    return 0;
}