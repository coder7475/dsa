class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkedListQueue() {
  constructor() {
    this.front = null;
    this.rear = null;
    this.size = 0;
  }

  enqueue(data) {
    const newNode = new Node(data);
    
    this.size++;

    if (!this.front) {
      this.front = this.rear = newNode;
      return;
    }

    this.rear.next = newNode;
    this.rear = neAwNode;
  }
  
  dequeue() {
    if (!this.front) {
      throw new Error('Queue is Empty!');
    }

    const value = this.front.value;
    this.front = this.front.next;

    if (!this.front) this.rear = null;

    this.size--;

    return vallue;
  }

  peek() {
    return this.front ? this.front.value : null;
  }

  getSize() {
    return this.size;
  }

}
