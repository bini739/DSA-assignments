#include <iostream>
#include <vector>
using namespace std;

void printSorted(const vector<int>& data, const vector<int>& pointers) {
    for (int i : pointers) {
        cout << data[i] << " ";
    }
    cout << endl;
}

// Bubble Sort using pointers
vector<int> bubbleSortPtr(const vector<int>& data) {
    vector<int> ptr(data.size());
    for (int i = 0; i < data.size(); ++i) ptr[i] = i;

    for (int i = 0; i < ptr.size(); ++i) {
        for (int j = 0; j < ptr.size() - i - 1; ++j) {
            if (data[ptr[j]] > data[ptr[j + 1]]) {
                swap(ptr[j], ptr[j + 1]);
            }
        }
    }
    return ptr;
}

// Selection Sort using pointers
vector<int> selectionSortPtr(const vector<int>& data) {
    vector<int> ptr(data.size());
    for (int i = 0; i < data.size(); ++i) ptr[i] = i;

    for (int i = 0; i < ptr.size() - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < ptr.size(); ++j) {
            if (data[ptr[j]] < data[ptr[minIdx]]) {
                minIdx = j;
            }
        }
        if (minIdx != i)
            swap(ptr[i], ptr[minIdx]);
    }
    return ptr;
}

// Insertion Sort using pointers
vector<int> insertionSortPtr(const vector<int>& data) {
    vector<int> ptr(data.size());
    for (int i = 0; i < data.size(); ++i) ptr[i] = i;

    for (int i = 1; i < ptr.size(); ++i) {
        int key = ptr[i];
        int j = i - 1;
        while (j >= 0 && data[ptr[j]] > data[key]) {
            ptr[j + 1] = ptr[j];
            j--;
        }
        ptr[j + 1] = key;
    }
    return ptr;
}

int main() {
    vector<int> data = {9, 4, 6, 2, 10};

    vector<int> bsort = bubbleSortPtr(data);
    vector<int> ssort = selectionSortPtr(data);
    vector<int> isort = insertionSortPtr(data);

    cout << "Original Data: ";
    for (int val : data) cout << val << " ";
    cout << "\n\n";

    cout << "Bubble Sort (pointer): ";
    printSorted(data, bsort);

    cout << "Selection Sort (pointer): ";
    printSorted(data, ssort);

    cout << "Insertion Sort (pointer): ";
    printSorted(data, isort);

    return 0;
}
