Algorithm: Find Second and Third Largest Elements in an Array
Step 1: Start
Step 2: Input the size of the array n
    If n < 3, display a message: "Array must have at least 3 elements" and exit

Step 3: Input the array elements into arr[0...n-1]
Step 4: Initialize three variables:
first = -∞ (or INT_MIN)

second = -∞

third = -∞

Step 5: Loop through each element of the array
For i = 0 to n - 1
    a) If arr[i] > first:
        → third = second
        → second = first
        → first = arr[i]

    b) Else if arr[i] > second and arr[i] != first:
        → third = second
        → second = arr[i]

    c) Else if arr[i] > third and arr[i] != second and arr[i] != first:
        → third = arr[i]

Step 6: After the loop, check:
If second == -∞ or third == -∞
    → Display: "Not enough distinct elements"

Else
    → Display second and third

Step 7: End