# Selection Sort

Selection Sort divides the array into a sorted and an unsorted portion. It repeatedly finds the minimum (or maximum) element from the unsorted portion and swaps it with the first unsorted element.

---

## How It Works

1. Start with the entire array considered as unsorted.
2. Find the smallest element in the unsorted portion.
3. Swap the smallest element with the first element of the unsorted portion.
4. Move the boundary between sorted and unsorted one position to the right.
5. Repeat until the entire array is sorted.

---

## Time & Space Complexity

| Case       | Time Complexity | Space Complexity |
|------------|-----------------|------------------|
| Best       | O(n^2)          | O(1)             |
| Average    | O(n^2)          | O(1)             |
| Worst      | O(n^2)          | O(1)             |

> Note: Unlike Bubble Sort and Insertion Sort, Selection Sort does NOT benefit from a nearly sorted array. It always performs O(n^2) comparisons.

---

## When to Use

- When memory writes are expensive (Selection Sort makes at most n swaps).
- When the dataset is small.
- When simplicity of implementation is preferred.

---

## When Not to Use

- When performance matters on large datasets.
- When the array is nearly sorted (Insertion Sort or Bubble Sort would be faster).
- When you need a stable sort (Selection Sort is NOT stable).

---

## Files

| File | Description |
|------|-------------|
| `selectionSort.ts` | TypeScript array-based implementation with ascending/descending order support |
| `selectionSortLinkedList.js` | JavaScript linked list implementation with a full `SinglyLinkedList` class |

---

## Usage (TypeScript)

```ts
const arr = [29, 10, 14, 37, 12];

// Ascending order
selectionSort([...arr], "asc");   // [10, 12, 14, 29, 37]

// Descending order
selectionSort([...arr], "desc");  // [37, 29, 14, 12, 10]
```

---

## Visual Example

```
[29, 10, 14, 37, 12]

Pass 1: Find min in [29, 10, 14, 37, 12] → 10 at index 1
        Swap 29 and 10 → [10, 29, 14, 37, 12]

Pass 2: Find min in [29, 14, 37, 12] → 12 at index 4
        Swap 29 and 12 → [10, 12, 14, 37, 29]

Pass 3: Find min in [14, 37, 29] → 14 at index 2
        Already in place → [10, 12, 14, 37, 29]

Pass 4: Find min in [37, 29] → 29 at index 4
        Swap 37 and 29 → [10, 12, 14, 29, 37]

Result: [10, 12, 14, 29, 37]
```

---

## Comparison: Selection vs Bubble vs Insertion Sort

| Criteria               | Bubble Sort | Insertion Sort | Selection Sort |
|------------------------|-------------|----------------|----------------|
| Best Case              | O(n)        | O(n)           | O(n^2)         |
| Average Case           | O(n^2)      | O(n^2)         | O(n^2)         |
| Worst Case             | O(n^2)      | O(n^2)         | O(n^2)         |
| Stable?                | Yes         | Yes            | No             |
| Number of Swaps        | O(n^2)      | O(n^2)         | O(n)           |
| Nearly Sorted Handling | Good        | Good           | Poor           |

---

## References

1. Cormen, Leiserson, Rivest, Stein. Introduction to Algorithms. MIT Press.
2. Robert Lafore. Data Structures and Algorithms in Java.
