//
// Created by Trung on 2/27/2024.
//
#include "../all.h"
using namespace std;
string hackerrankInString(string s) {
    string temp="hackerrank";
    int lenTemp= temp.length();
    int lenString= s.length();
    int locationString = 0;
    int locationTemp=0;
    while (locationString <= lenString-1 && locationTemp <=lenTemp-1 ) {
        if(s[locationString]==temp[locationTemp]) {
            locationTemp=locationTemp+1;
        }
        locationString++;
    }
    if(locationTemp==lenTemp) return "YES"; else return "NO";

}
int main()
{
    string s;
    cin>>s;
    cout<< hackerrankInString(s);

}