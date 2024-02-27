//
// Created by Trung on 2/27/2024.
//
#include <iostream>
using namespace std;
int findDigits(int n)
{
    int count = 0;
    int temp = n;
     while (temp >0)
     {
         int digit = temp %10;
         if(digit != 0 && n % digit == 0)
         {
             count++;
         }
            temp = temp /10;
     }
    return count;

}
int main()
{
    int d;
    for(int i =1 ; i <= d ; i++)
    {
        int n;
        cin >> n;
        cout << findDigits(n) << endl;}

}
