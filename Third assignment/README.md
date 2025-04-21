What are Iterative and Recursive Approaches?

Approach | Description
Iterative | Uses loops (e.g., for, while) to repeat operations until a condition is met.
Recursive | A function calls itself with a smaller input, breaking the problem into subproblems.

Binary Search Algorithm :
Binary Search works on sorted arrays. It repeatedly divides the search space in half, checking whether the target is in the left or right half.

Method | Time Complexity | Space Complexity | Notes
Iterative | O(log n) | O(1) | Constant memory usage
Recursive | O(log n) | O(log n) (call stack) | Uses system stack memory

Summary of Findings :

Both iterative and recursive binary search offer the same time complexity: O(log n), because they divide the search space in half each time.

Recursive approach uses additional stack memory proportional to the depth of recursion: O(log n).

Iterative approach is usually preferred for large datasets to avoid stack overflow and is generally more memory-efficient.

However, recursive code can be more elegant and easier to understand in some cases.
