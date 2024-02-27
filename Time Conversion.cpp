//
// Created by Trung on 2/27/2024.
//

#include "all.h"
using namespace std;
string timeConversion(string s)
{
    int hour= stoi(s.substr(0,2));
    string ap = s.substr(8,2);
    string retur="";

    if(ap=="AM")
    {
        if(hour==12) retur +="00";
        else
        if( hour<=9) retur = retur +"0"+ to_string(+hour);
        else
        if(hour>=10) retur += to_string(hour);
    }
    if(ap == "PM")
    {
        if(hour==12) retur+= to_string(hour);
        else retur+= to_string(hour+12);
    }
    retur= retur+":"+s.substr(3,5);
    return retur;
}
int main()
{
 string s;
 cin>>s;
 cout<<timeConversion(s);
}