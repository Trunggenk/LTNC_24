//
// Created by Trung on 2/22/2024.
//
#include "../all.h"
int maxofint(int a, int b ,int c , int d)
{
    int max = a;
    if (b>max)
    {
        max = b;
    }
    if (c>max)
    {
        max = c;
    }
    if (d>max)
    {
        max = d;
    }
    return max;

}
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
 cout<<maxofint(a,b,c,d);
    return 0;
}