Exponential Search :

How It Works:
Works on sorted arrays.
It first finds a range where the element could be using exponential jumps (2^i), then performs binary search in that range.
Complexity:

Time:

Best: O(1)
Worst: O(log i) → i is the index where the target lies
Space: O(1) for iterative binary search inside

 Jump Search :

 How It Works:
Works on sorted arrays.
Jump ahead by fixed steps (e.g., √n), then do linear search within the block.

 Complexity:
 Time: O(√n)
Space: O(1)
Best if array is sorted and random access is fast.

Hashing-Based Search :

 How It Works:
Works on unsorted data.
Uses a hash table to store and retrieve elements in constant time.

Complexity:
Time:
Average: O(1)
Worst (with collisions): O(n)
Space: O(n)
Best for unsorted data when fast access is needed

Complexity Comparison Table :

| Algorithm         | Best Time | Avg Time   | Worst Time | Space | Sorted? |
|------------------|-----------|------------|------------|--------|---------|
| Exponential Search| O(1)      | O(log i)   | O(log n)   | O(1)   | ✅       |
| Jump Search       | O(1)      | O(√n)      | O(√n)      | O(1)   | ✅       |
| Hash Search       | O(1)      | O(1)       | O(n)       | O(n)   | ❌       |

Summary of Findings :
Exponential Search is great for very large sorted arrays, especially when the element is near the start.
Jump Search offers a balanced alternative to binary search when sequential memory access is more efficient.
Hashing is the fastest on average but requires extra memory and doesn't work on sorted arrays.

