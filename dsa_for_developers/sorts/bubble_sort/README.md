# Bubble Sort

Bubble Sort is one of the simplest sorting algorithms. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

---

## How It Works

1. Start from the first element of the array.
2. Compare the current element with the next element.
3. If the current element is greater than the next element (for ascending order), swap them.
4. Move to the next pair and repeat step 2-3.
5. After each full pass, the largest unsorted element "bubbles up" to its correct position.
6. Repeat until no swaps are needed in a full pass (optimization).

---

## Time & Space Complexity

| Case       | Time Complexity | Space Complexity |
|------------|-----------------|------------------|
| Best       | O(n)            | O(1)             |
| Average    | O(n^2)          | O(1)             |
| Worst      | O(n^2)          | O(1)             |

---

## When to Use

- When the dataset is small.
- When the array is nearly sorted (due to the early-exit optimization).
- For educational purposes to understand sorting fundamentals.

---

## When Not to Use

- When performance matters on large datasets. Use Merge Sort or Quick Sort instead.
- When memory is a constraint and you still need O(n log n) performance.

---

## Files

| File | Description |
|------|-------------|
| `bubbleSort.ts` | TypeScript array-based implementation with ascending/descending order support |
| `bubbleSortLinkedList.js` | JavaScript linked list implementation with a full `SinglyLinkedList` class |

---

## Usage (TypeScript)

```ts
const arr = [29, 10, 14, 37, 12];

// Ascending order
bubbleSort([...arr], "asc");   // [10, 12, 14, 29, 37]

// Descending order
bubbleSort([...arr], "desc");  // [37, 29, 14, 12, 10]
```

---

## Visual Example

```
Pass 1: [29, 10, 14, 37, 12]
        29 > 10 → swap → [10, 29, 14, 37, 12]
        29 > 14 → swap → [10, 14, 29, 37, 12]
        29 < 37 → no swap
        37 > 12 → swap → [10, 14, 29, 12, 37]

Pass 2: [10, 14, 29, 12, 37]
        10 < 14 → no swap
        14 < 29 → no swap
        29 > 12 → swap → [10, 14, 12, 29, 37]

Pass 3: [10, 14, 12, 29, 37]
        10 < 14 → no swap
        14 > 12 → swap → [10, 12, 14, 29, 37]

Pass 4: No swaps → sorted!
```

---

## References

1. Cormen, Leiserson, Rivest, Stein. Introduction to Algorithms. MIT Press.
2. Robert Lafore. Data Structures and Algorithms in Java.
