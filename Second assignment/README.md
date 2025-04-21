Time and Space complexity Analysis :

| Algorithm       | Time Complexity (Best / Avg / Worst) | Space Complexity | Stable |
|----------------|---------------------------------------|------------------|--------|
| Bubble Sort     | O(n) / O(n²) / O(n²)                  | O(1)             | Yes    |
| Selection Sort  | O(n²) / O(n²) / O(n²)                 | O(1)             | No     |
| Insertion Sort  | O(n) / O(n²) / O(n²)                  | O(1)             | Yes    |


Summary of Findings :


All three sorting algorithms use an index pointer array to avoid modifying the original data.

Bubble Sort and Insertion Sort are stable, while Selection Sort is not.

Insertion Sort performs best for nearly sorted data (best case: O(n)).

Selection Sort always does the same number of comparisons, regardless of order.

Bubble Sort is simple but inefficient for large datasets.