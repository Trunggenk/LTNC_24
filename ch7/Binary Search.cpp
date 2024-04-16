//
// Created by trung on 4/12/2024.
//
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        return binarySearch(arr, mid + 1, right, x);
    }

    return -1;
}

int main()
{
int a[100];
int n;
cin>>n;
int number=3;
for(int i =1; i<=n; i++)
{
    cin>>a[i];
}
cout<< binarySearch(a,0,n-1 , number);
}
