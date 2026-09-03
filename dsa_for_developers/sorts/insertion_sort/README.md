# Insertion Sort

Insertion Sort builds the sorted array one element at a time by picking the current element and inserting it into its correct position among the previously sorted elements. It is similar to how you might sort playing cards in your hand.

---

## How It Works

1. Start from the second element (index 1), considering the first element as already sorted.
2. Store the current element in a temporary variable (`current`).
3. Compare `current` with the elements to its left (in the sorted portion).
4. Shift all larger elements one position to the right to make room for `current`.
5. Insert `current` into the correct position.
6. Repeat for all remaining elements.

---

## Time & Space Complexity

| Case       | Time Complexity | Space Complexity |
|------------|-----------------|------------------|
| Best       | O(n)            | O(1)             |
| Average    | O(n^2)          | O(1)             |
| Worst      | O(n^2)          | O(1)             |

---

## When to Use

- When the dataset is small or nearly sorted.
- When you need a stable sort (Insertion Sort is stable).
- As the base case in hybrid algorithms like Tim Sort (used in Python and Java).

---

## When Not to Use

- When performance matters on large, unsorted datasets.
- When you need O(n log n) worst-case guarantees.

---

## Files

| File | Description |
|------|-------------|
| `insertionSort.ts` | TypeScript array-based implementation with ascending/descending order support |
| `insersertionSortLinkedList.js` | JavaScript linked list implementation with a full `SinglyLinkedList` class |

---

## Usage (TypeScript)

```ts
const arr = [29, 10, 14, 37, 12];

// Ascending order
insertionSort([...arr], "asc");   // [10, 12, 14, 29, 37]

// Descending order
insertionSort([...arr], "desc");  // [37, 29, 14, 12, 10]
```

---

## Visual Example

```
[29, 10, 14, 37, 12]

i=1: current=10
     29 > 10 → shift 29 right → [_, 29, 14, 37, 12]
     Insert 10 at index 0 → [10, 29, 14, 37, 12]

i=2: current=14
     29 > 14 → shift 29 right → [10, _, 29, 37, 12]
     10 < 14 → stop → Insert 14 at index 1 → [10, 14, 29, 37, 12]

i=3: current=37
     29 < 37 → stop → Insert 37 at index 3 → [10, 14, 29, 37, 12]

i=4: current=12
     37 > 12 → shift 37 → [10, 14, 29, _, 37]
     29 > 12 → shift 29 → [10, 14, _, 29, 37]
     14 > 12 → shift 14 → [10, _, 14, 29, 37]
     10 < 12 → stop → Insert 12 at index 1 → [10, 12, 14, 29, 37]

Result: [10, 12, 14, 29, 37]
```

---

## References

1. Cormen, Leiserson, Rivest, Stein. Introduction to Algorithms. MIT Press.
2. Robert Lafore. Data Structures and Algorithms in Java.
