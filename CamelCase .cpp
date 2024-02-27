//
// Created by Trung on 2/27/2024.
//
#include "all.h"
int camelcase(string s)
{
    int count=1;
    int l=s.length();
    for(int i =0 ; i< l; i++)
    {
        if( s[i]<='Z' && s[i]>='A')
        {
            count++;
        }
    }
    return count;
}
int main()

{
string s;
cin>>s;
cout<<camelcase(s);
}

