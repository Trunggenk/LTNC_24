#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
 set<int> s;
 int q;
 cin>>q;
 for(int i =1 ; i<= q; i++)
 {
     int x;
     int y;
     cin>>x>>y;
     if(x==1)
     {
         s.insert(y);
         }
     if(x==2)
     {
         s.erase(y);
     }
     if(x==3) {
         set<int>::iterator itr = s.find(y);
         if(itr != s.end())
         {
             cout<<"YES";
         }
         else
         if( *itr == y)
         cout<<"YES";
         else
             if(*itr != y)
             {
                 cout<<"NO";
             }

     }

 }
}


