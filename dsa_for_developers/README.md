### Expand The DSA Full Form

---

DSA stands for Data structures & Algorithms. These are two different terms.

**Data Structures:** The storage where you can store data.

**In computer science**, a **data structure** is like those storage items — it’s a way of organizing and storing data so you can use it effectively.

Imagine you’re organizing your house. You have different storage items like:

- A **drawer** for socks
- A **bookshelf** for books
- A **shoe rack** for shoes
- A **fridge** for food

Each of these helps you **store** and **access** things efficiently.

**Algorithms:** The procedures, the operations we need to work on the data.

**In programming**, an algorithm is a set of instructions to manipulate data and solve a problem.

Now, imagine you’re baking a cake. You follow a **step-by-step recipe**:

1. Get ingredients
2. Mix them
3. Bake for 30 minutes
4. Serve

That **recipe** is an **algorithm** — a sequence of steps to solve a problem or accomplish a task. It requires data to process and these data is stored inside one or many data structures.

### [](https://www.stacklearner.com/my/workshops/9d9a0403-f4d1-4bba-8f02-6163cf477f7e/lectures/4f9f7f61-34e2-46d5-bc1e-2fa21f6f3742/recording#why-algorithm-always-comes-with-data-structures)Why Algorithm always comes with Data Structures

---

Data Structures without Algorithm is a sealed treasure that we can not open. Algorithm without having a data structure is just a set of instructions, we don’t need to worry about them. You almost never need one without the other.

### [](https://www.stacklearner.com/my/workshops/9d9a0403-f4d1-4bba-8f02-6163cf477f7e/lectures/4f9f7f61-34e2-46d5-bc1e-2fa21f6f3742/recording#common-data-structures)Common Data Structures

---

We are surrounded by data structures

List of Common Structures:

- Array
- Linked List
- Stack
- Queue
- Hash Table / Hash Map
- Set
- Tree
- Heap
- Trie
- Graph

### [](https://www.stacklearner.com/my/workshops/9d9a0403-f4d1-4bba-8f02-6163cf477f7e/lectures/4f9f7f61-34e2-46d5-bc1e-2fa21f6f3742/recording#common-operations)Common Operations

---

| **Operation**   | **Meaning**                                                              |
| --------------- | ------------------------------------------------------------------------ |
| **Insert**      | Add new data into the structure or memory                                |
| **Delete**      | Remove data from a specific location                                     |
| **Update**      | Modify existing data                                                     |
| **Search/Find** | Locate specific data based on a value or key                             |
| **Read/Access** | Retrieve data from a location without modifying it                       |
| **Traverse**    | Visit all elements in a structured way (e.g., one by one, top to bottom) |
| **Sort**        | Rearrange data based on a rule (ascending, alphabetical, etc.)           |
| **Transform**   | Convert data into another format/structure                               |
| **Merge**       | Combine two or more data collections into one                            |
| **Split**       | Divide a data collection into parts                                      |
| **Map**         | Apply a function to every element (common in functional programming)     |
| **Filter**      | Select elements based on a condition                                     |
| **Aggregate**   | Compute a summary (sum, average, count, etc.)                            |

### [](https://www.stacklearner.com/my/workshops/9d9a0403-f4d1-4bba-8f02-6163cf477f7e/lectures/4f9f7f61-34e2-46d5-bc1e-2fa21f6f3742/recording#how-to-choose-the-correct-data-structure)How to choose the correct data structure

---

Why do we need different data structures and algorithms?

Analogy: Untidy Expensive Room vs Tidy Cheap Room

We need to perform different operations to achieve different things. Some data structures are good at some operations while other data structures are good at some other operations. Based on the operations we need to decide which data structures will perform better. Sometimes, we need to use multiple data structures on same data for different operations.

**But how can we know which data structures will perform better on which data structures? How do we measure? What is the metric?**

The following two programs are doing the same thing, sorting an array. Between these two program which one will perform better?

[https://drive.google.com/file/d/1I_IWiLYR4oRJopMP3JrFYK43VzaNDf41/view?usp=sharing](https://drive.google.com/file/d/1I_IWiLYR4oRJopMP3JrFYK43VzaNDf41/view?usp=sharing)
![[Bubble Sort Algorithm.png]]
[https://drive.google.com/file/d/16spCbj0DRrZxTXTBU_tGVahZfsK4fGWk/view?usp=sharing](https://drive.google.com/file/d/16spCbj0DRrZxTXTBU_tGVahZfsK4fGWk/view?usp=sharing)
![[Quick Sort Algorithm.png]]
How do we decide? Based on the line of code? Based on the runtime execution time? Based on what?

### [](https://www.stacklearner.com/my/workshops/9d9a0403-f4d1-4bba-8f02-6163cf477f7e/lectures/4f9f7f61-34e2-46d5-bc1e-2fa21f6f3742/recording#asymptotic-analysis)Asymptotic Analysis

---

Asymptotic analysis is **a method used to describe the limiting behavior of a function or algorithm as its input size increases towards infinity**. It's particularly useful in computer science for understanding the efficiency and scalability of algorithms by focusing on how their performance changes with large inputs, ignoring constant factors and low-level details

**Key Concepts:**

- **Focus on Growth Rate:** Asymptotic analysis focuses on the rate at which an algorithm's resource usage (e.g., time or space) grows as the input size increases.
- **Asymptotic Notations:** It employs mathematical notations like Big O, Big Omega, and Big Theta to express these growth rates.
- **Ignoring Constants:** Constant factors and specific input sizes are often ignored because they become less relevant as the input grows large.
- **Scalability:** Asymptotic analysis helps determine how well an algorithm will perform with larger datasets or inputs, providing insights into its scalability.
- **Performance Comparison:** It allows for the comparison of different algorithms' efficiencies by looking at their asymptotic growth rates.

**Notations:**

- **Big (O) - Upper Bound:** In the worst case scenario the algorithm will take *at most* this much time. Used the most in algorithm analysis. Ex. You were looking for a book and found it at the last.
- Big (Ω) - Lower Bound: In the best case scenario the algorithm will take this much time. Ex. You found the desired book at the first attempt.
- Big (Θ) - Tight Bound: Describe the exact growth rate. The algorithm takes *this much* time in all cases. Used when the upper and lower bounds are the same.

**Growth Functions:**

| **Notation**            | **Name**                     | **Example**                            | **Meaning (as n grows)**     |
| ----------------------- | ---------------------------- | -------------------------------------- | ---------------------------- |
| O(1)                    | Constant Time                | Accessing array by index arr[5]        | Always takes same time       |
| O(log n)                | Logarithmic Time             | Binary Search                          | Very efficient; grows slowly |
| O(n)                    | Linear Time                  | Traversing an array                    | Time grows directly with n   |
| O(n log n)              | Linearithmic Time            | Merge Sort, Quick Sort (avg)           | Between linear and quadratic |
| O(n²)                   | Quadratic Time               | Nested loops (e.g., Bubble Sort)       | Grows fast as n increases    |
| O(n³)                   | Cubic Time, Polynomial       | 3-nested loops (e.g., matrix mult.)    | Slower than quadratic        |
| **O(n⁴), O(n⁵), O(nᵏ)** | Quartic, Quintic, Polynomial |                                        | Very very slow               |
| O(2ⁿ)                   | Exponential Time             | Recursive Fibonacci                    | Explodes very quickly        |
| O(n!)                   | Factorial Time               | Solving traveling salesman brute-force | Extremely slow, impractical  |
|                         |                              |                                        |                              |
|                         |                              |                                        |                              |

[https://drive.google.com/file/d/1s_EUqHCDSrVp3zt8Wii1Olm4Hg2Z4YtE/view?usp=sharing](https://drive.google.com/file/d/1s_EUqHCDSrVp3zt8Wii1Olm4Hg2Z4YtE/view?usp=sharing)

**Best, Worst, and Average Case:**

| **Term**         | **Meaning**                     | **Example (Linear Search)**          |
| ---------------- | ------------------------------- | ------------------------------------ |
| **Best Case**    | Fastest scenario (minimum time) | Element is at the first position     |
| **Worst Case**   | Slowest scenario (maximum time) | Element is at the end or not present |
| **Average Case** | Expected time over all inputs   | Element is somewhere randomly        |

### [](https://www.stacklearner.com/my/workshops/9d9a0403-f4d1-4bba-8f02-6163cf477f7e/lectures/4f9f7f61-34e2-46d5-bc1e-2fa21f6f3742/recording#the-domination-rules)The domination Rules

---

**When combining multiple time complexities:**

- **Take the term with the highest growth rate.**
- It **dominates** the rest as input size n grows large.

This is called the **“dominant term” rule** in asymptotic analysis.

Because Big-O is about **growth trends**, not exact counts.

For large n:

- n³ grows much faster than n², which grows faster than n log n, etc.
- So n³ + n² + log n is **O(n³)**

This is like adding pennies to millions - the pennies become **negligible**.

Here is a clean and structured Markdown file based on your text. No em dashes are used, and references are provided at the end.

---

# Space Complexity and Data Structures

## Space Complexity Overview

Space complexity measures the total memory used by an algorithm during execution. It includes:

1. Input storage
2. Temporary variables
3. Function call stack
4. Data structures used

---

### Input Storage

This is the memory required to store input values.

* If the input is an array of `n` elements, then input space is `O(n)`
* Some analyses exclude input space, but generally it is counted

**Example**
An input array of size `n` contributes `O(n)` space.

---

### Temporary Variables

Variables used during algorithm execution, such as counters or accumulators.

* Usually constant memory
* Most contribute `O(1)` unless storing large data

---

### Function Call Stack

Memory used for active function calls, especially in recursion.

* A recursive function calling itself `n` times uses `O(n)` space
* Contains return address, parameters, and local variables

---

### Additional Data Structures

If an algorithm creates extra structures, they affect space complexity.

| Structure Used            | Added Space |
| ------------------------- | ----------- |
| Array of size `n`         | `O(n)`      |
| Hash map storing `k` keys | `O(k)`      |
| Tree with `n` nodes       | `O(n)`      |

---

## Types of Data Structures

Data structures organize and manage data for efficient access.

There are two major categories:

| Type       | Explanation                             |
| ---------- | --------------------------------------- |
| Linear     | Sequential arrangement of elements      |
| Non Linear | Hierarchical or interconnected elements |

---

## Linear Data Structures

### Common Examples

| Structure   | Description                       |
| ----------- | --------------------------------- |
| Array       | Contiguous memory, indexed access |
| Linked List | Nodes connected with pointers     |
| Stack       | LIFO order                        |
| Queue       | FIFO order                        |

---

## Non Linear Data Structures

| Structure | Description                        |
| --------- | ---------------------------------- |
| Tree      | Parent-child relationships         |
| Graph     | Nodes connected via edges          |
| Heap      | Tree with ordering rules           |
| Trie      | Tree designed for string retrieval |

---

# Array

An array stores elements in a contiguous memory block. Indexing allows constant time access.

### Core Characteristics

* Contiguous memory storage
* Constant time access `O(1)`
* Fixed or dynamic size depending on language

### Time Complexity Table

| Operation       | Description         | Time           |
| --------------- | ------------------- | -------------- |
| Access          | `arr[i]`            | O(1)           |
| Update          | Replace element     | O(1)           |
| Insert at end   | Add to back         | O(1) amortized |
| Insert at start | Shift elements      | O(n)           |
| Delete at end   | Remove last element | O(1)           |
| Search          | Find by value       | O(n)           |

---

### Custom Dynamic Array (JavaScript)

```js
const DEFAULT_CAPACITY = 53;

class CustomArray {
  constructor(capacity = DEFAULT_CAPACITY) {
    this.capacity = capacity;
    this.array = new Array(capacity);
    this.length = 0;
  }
  push(value) {
    if (this.length === this.capacity) {
      this.capacity *= 2;
      const newArray = new Array(this.capacity);
      for (let i = 0; i < this.length; i++) {
        newArray[i] = this.array[i];
      }
      this.array = newArray;
    }
    this.array[this.length++] = value;
  }
}
```

---

# Linked List

A Linked List stores data in nodes that are connected through references instead of contiguous memory.

### Node Structure

```js
class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}
```

### Characteristics

* No random access
* Flexible size
* Efficient for insertion and deletion

### Time Complexity

| Operation       | Time                        |
| --------------- | --------------------------- |
| Traversal       | O(n)                        |
| Insert at head  | O(1)                        |
| Insert at tail  | O(n) without tail reference |
| Delete by value | O(n)                        |
| Access by index | O(n)                        |

---

# Real World Example: Image Viewer Navigation

```ts
export class ImageNode {
  constructor(public data: string) {
    this.next = null;
    this.prev = null;
  }
}
```

Used for:

* Photo galleries
* Media playlists
* Carousel components

---

# References

1. Cormen, Leiserson, Rivest, Stein. Introduction to Algorithms. MIT Press.
2. Robert Lafore. Data Structures and Algorithms in Java.
3. Sedgewick, Wayne. Algorithms Fourth Edition. Addison-Wesley.
4. MIT OpenCourseWare. Introduction to Algorithms: MIT 6.006.

