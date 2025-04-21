#include <iostream>
#include <vector>
using namespace std;

// Iterative Binary Search
int binarySearchIterative(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;  // Found
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;  // Not found
}

// Recursive Binary Search
int binarySearchRecursive(const vector<int>& arr, int left, int right, int target) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, right, target);
    else
        return binarySearchRecursive(arr, left, mid - 1, target);
}

int main() {
    vector<int> data = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;

    int indexIter = binarySearchIterative(data, target);
    int indexRec = binarySearchRecursive(data, 0, data.size() - 1, target);

    cout << "Iterative Search: " << (indexIter != -1 ? "Found at index " + to_string(indexIter) : "Not found") << endl;
    cout << "Recursive Search: " << (indexRec != -1 ? "Found at index " + to_string(indexRec) : "Not found") << endl;

    return 0;
}
