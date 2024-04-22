//
// Created by trung on 4/12/2024.
//
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    int mid= (left+right)/2;
    if(arr[mid]==x) return mid;
    if(arr[mid] > x ) return binarySearch(arr,mid, right,x );
    if(arr[mid] < x)  return binarySearch(arr, left ,mid, x);

}

int main()
{
int arr[100];
int n;
cin>>n;
int number=3;
for(int i =0; i<=n-1; i++)
{
    cin>>arr[i];
}
cout<< binarySearch(arr,0,n-1 , number);
}
