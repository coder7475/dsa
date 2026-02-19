class ArrayQueueTwoPointer {
	constructor(capacity = 10) {
		this.queue = new Array(capacity);
		this.front = 0;
		this.rear = 0;
    this.capacity = capacity;
    this.size = 0;
	}

	enqueue(data) {
		if (this.rear === this.capacity) {
			throw new Error('Queue is full');
		}
		this.queue[this.rear++] = data;
    this.size++;
	}

	dequeue() {
		if (this.front === this.rear) {
			throw new Error('Queue is empty');
		}

		const value = this.queue[this.front];
    
    this.front++;
    this.size--;

		return value;
	}

  peek() {
    return this.size ? this.queue[this.front] : null;
  }
}


const q1 = new ArrayQueueTwoPointer(5);

q1.enqueue(1);

console.log(q1.peek());


