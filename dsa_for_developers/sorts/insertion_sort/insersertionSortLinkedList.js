class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }

  getValue() {
    return this.data;
  }
}

class SinglyLinkedList {
  // properties
  head;
  size = 0;

  // methods
  append(data) {
    const newNode = new Node(data);
    this.size++;

    if (!this.head) {
      this.head = newNode;
      return;
    }

    let current = this.head;

    while (current.next) {
      current = current.next;
    }

    current.next = newNode;
  }

  // Time: O(1), Space: O(1)
  prepend(data) {
    const newNode = new Node(data);
    this.size++;

    if (!this.head) {
      this.head = newNode;
      return;
    }

    newNode.next = this.head;
    this.head = newNode;
  }

  toString() {
    let current = this.head;

    let result = "";

    while (current) {
      const arrow = current.next ? "->" : "";
      result += `${current.data} ${arrow} `;
      current = current.next;
    }

    return result;
  }

  insert(data, index) {
    if (index < 0 || index > this.size) {
      throw new Error("Invalid Index");
    }

    if (index === 0) {
      this.prepend(data);
      return;
    }

    if (index === this.size) {
      this.append(data);
      return;
    }

    const newNode = new Node(data);

    let current = this.head;
    let prev = null;
    let count = 0;

    while (count < index) {
      prev = current;
      current = current.next;
      count++;
    }

    newNode.next = current;
    prev.next = newNode;
  }

  // Time: O(n²), Space: O(1)
  sort() {
    if (!this.head || !this.head.next) return;

    let sorted = null;
    let current = this.head;

    while (current) {
      const next = current.next;

      if (!sorted || current.data < sorted.data) {
        current.next = sorted;
        sorted = current;
      } else {
        let search = sorted;
        while (search.next && search.next.data < current.data) {
          search = search.next;
        }
        current.next = search.next;
        search.next = current;
      }

      current = next;
    }

    this.head = sorted;
  }
}



const list = new SinglyLinkedList();

list.prepend(1);
list.prepend(40);
list.prepend(8);
list.append(10);

list.append(0);
list.append(19);
list.append(15);
list.append(30);
list.append(6);
list.append(42);


console.log("Before sort:", list.toString());
list.sort();
console.log("After sort:", list.toString());


