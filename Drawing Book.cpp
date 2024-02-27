//
// Created by Trung on 2/28/2024.
//
#include "all.h"
int pageCount(int n , int p)
{
    int step = floor(n/2)+1;
    int loc = floor(p/2)+1;
    if(step-loc>loc-1) return loc-1;
    else return(step-loc)
}

int main()
{

}