#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;

int main() {
    int n;
    
    // Get the number of elements
    cout << "Enter the number of elements (at least 3): ";
    cin >> n;

    if (n < 3) {
        cout << "Array must have at least 3 elements!" << endl;
        return 1;
    }

    int arr[n];

    // Input elements
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    // Check if second and third exist
    if (second == INT_MIN || third == INT_MIN) {
        cout << "There aren't enough distinct elements to find second and third largest." << endl;
    } else {
        cout << "Second largest: " << second << endl;
        cout << "Third largest: " << third << endl;
    }

    return 0;
}
