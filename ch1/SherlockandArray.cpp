#include <iostream>
#include <vector>
#include <string>
using namespace std;

string balancedSums(vector<int> arr) {
    int left = 0;
    int right = arr.size() - 1;
    int leftSum = arr[left];
    int rightSum = arr[right];

    while (left < right) {
        if (leftSum < rightSum) {
            left++;
            leftSum += arr[left];
        } else if (leftSum > rightSum) {
            right--;
            rightSum += arr[right];
        } else {
            left++;
            right--;
            if (left != right) {
                leftSum += arr[left];
                rightSum += arr[right];
            }
        }
    }

    return (leftSum == rightSum) ? "YES" : "NO";
}

int main() {
    vector<int> arr = {1, 2, 3, 3};
    cout << balancedSums(arr) << endl;
    return 0;
}