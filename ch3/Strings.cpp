//
// Created by Trung on 2/27/2024.
//
#include "../all.h";
using namespace std;
int main()

{
    string a,b,a1,b1;
    cin>>a;
    cin.ignore();
    cin>>b;
    cout<< a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a << " "<< b;
}