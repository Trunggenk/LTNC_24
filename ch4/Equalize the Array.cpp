//
// Created by Trung on 2/28/2024.
//
#include "../all.h"
int equalizeArray(vector<int> arr) {
    int arrayFrequency[102];
    int len = arr.size();
    for(int i =0 ; i<len ; i++)
    {
        arrayFrequency[arr[i]]++;
    }

    int max=0;
    for (int i =1; i<101; i++)
    {
        if (arrayFrequency[i]>=max) max=arrayFrequency[i];
    }
    return len-max;
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::cout << "So luong phan tu trong vector: " << arr.size() << std::endl;
    return 0;
}