//
// Created by Trung on 2/27/2024.
//

#include <iostream>
using namespace std;
string kangaroo(int x1,int v1, int x2, int v2)
{
   if(x1!= x2)
   {
       if(x1<x2 && v1<=v2) return "NO";
       if(x1>x2 && v1>=v2) return "YES";
       if((x1-x2)%(v2-v2)== 0) return "YES"; else return"NO";
   }
   else return "YES";
}
int main()
{
   int x1,v1,x2,v2;
   cin>>x1>>v1>>x2>>v2;
   cout<<kangaroo(x1,v1,x2,v2);
}