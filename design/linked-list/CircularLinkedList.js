class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class CircularLinkedList {
  constructor() {
    this.tail = null; // Only maintain tail pointer
    this.size = 0;
  }

  // Check if list is empty
  isEmpty() {
    return this.tail === null;
  }

  // Get the size
  getSize() {
    return this.size;
  }

  // Get head node (tail.next is always head)
  getHead() {
    return this.tail ? this.tail.next : null;
  }

  // Insert at the beginning - O(1)
  insertAtBeginning(data) {
    const newNode = new Node(data);

    if (this.isEmpty()) {
      this.tail = newNode;
      newNode.next = newNode; // Points to itself
    } else {
      newNode.next = this.tail.next; // Point to current head
      this.tail.next = newNode; // Update tail to point to new head
    }
    this.size++;
  }

  // Insert at the end - O(1)
  insertAtEnd(data) {
    const newNode = new Node(data);

    if (this.isEmpty()) {
      this.tail = newNode;
      newNode.next = newNode;
    } else {
      newNode.next = this.tail.next; // New node points to head
      this.tail.next = newNode; // Old tail points to new node
      this.tail = newNode; // Update tail to new node
    }
    this.size++;
  }

  // Insert after a specific value
  insertAfter(targetData, data) {
    if (this.isEmpty()) {
      console.log("List is empty");
      return;
    }

    const newNode = new Node(data);
    let current = this.tail.next; // Start from head

    do {
      if (current.data === targetData) {
        newNode.next = current.next;
        current.next = newNode;

        // Update tail if we inserted after the current tail
        if (current === this.tail) {
          this.tail = newNode;
        }
        this.size++;
        return;
      }
      current = current.next;
    } while (current !== this.tail.next);

    console.log(`Node with data ${targetData} not found`);
  }

  // Delete first node - O(1)
  deleteFirst() {
    if (this.isEmpty()) {
      console.log("List is empty");
      return;
    }

    const head = this.tail.next;

    if (head === this.tail) {
      // Only one node
      this.tail = null;
    } else {
      this.tail.next = head.next; // Skip the head node
    }
    this.size--;
  }

  // Delete last node - O(n)
  deleteLast() {
    if (this.isEmpty()) {
      console.log("List is empty");
      return;
    }

    const head = this.tail.next;

    if (head === this.tail) {
      // Only one node
      this.tail = null;
    } else {
      let current = head;
      // Find second to last node
      while (current.next !== this.tail) {
        current = current.next;
      }
      current.next = head; // Point to head
      this.tail = current; // Update tail
    }
    this.size--;
  }

  // Delete a node by value
  delete(data) {
    if (this.isEmpty()) {
      console.log("List is empty");
      return;
    }

    const head = this.tail.next;
    let current = head;
    let previous = this.tail;

    do {
      if (current.data === data) {
        // If only one node
        if (current === this.tail && current.next === current) {
          this.tail = null;
        }
        // If deleting the tail
        else if (current === this.tail) {
          previous.next = head;
          this.tail = previous;
        }
        // Regular deletion
        else {
          previous.next = current.next;
        }
        this.size--;
        return;
      }
      previous = current;
      current = current.next;
    } while (current !== head);

    console.log(`Node with data ${data} not found`);
  }

  // Search for a node
  search(data) {
    if (this.isEmpty()) {
      return false;
    }

    let current = this.tail.next;
    do {
      if (current.data === data) {
        return true;
      }
      current = current.next;
    } while (current !== this.tail.next);

    return false;
  }

  // Traverse and display
  traverse() {
    if (this.isEmpty()) {
      console.log("List is empty");
      return;
    }

    let current = this.tail.next; // Start from head
    const values = [];
    do {
      values.push(current.data);
      current = current.next;
    } while (current !== this.tail.next);

    console.log(values.join(" -> ") + " -> (back to head)");
  }

  // Display list information
  display() {
    console.log(`Size: ${this.size}`);
    if (!this.isEmpty()) {
      console.log(`Head: ${this.tail.next.data}, Tail: ${this.tail.data}`);
    }
    this.traverse();
  }
}

// Usage Example
const list = new CircularLinkedList();

list.insertAtEnd(5);
list.insertAtEnd(10);
list.insertAtBeginning(2);
list.insertAtEnd(15);

list.display();
// Output: Size: 4, Head: 2, Tail: 15
// 2 -> 5 -> 10 -> 15 -> (back to head)

console.log("Search 10:", list.search(10)); // true

list.deleteFirst();
list.display();
// Output: Size: 3, Head: 5, Tail: 15
// 5 -> 10 -> 15 -> (back to head)

list.deleteLast();
list.display();
// Output: Size: 2, Head: 5, Tail: 10
// 5 -> 10 -> (back to head)
