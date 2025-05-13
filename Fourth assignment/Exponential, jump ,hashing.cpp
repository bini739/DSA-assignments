#include <bits/stdc++.h>
using namespace std;

// Binary search helper function
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// Exponential search function
int exponentialSearch(int arr[], int n, int x) {
    // If the target is at the first position
    if (n == 0) return -1;
    if (arr[0] == x) return 0;

    // Find range for binary search by repeated doubling
    int i = 1;
    while (i < n && arr[i] <= x)
        i *= 2;

    // Perform binary search in the found range
    return binarySearch(arr, i / 2, min(i, n - 1), x);
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = exponentialSearch(arr, n, x);
    cout << (result == -1 ? "Element not found" : "Element found at index " + to_string(result)) << endl;
    return 0;
}