class ArrayStack {
  constructor (maxSize = 10) {
    this.stack = new Array(maxSize);
    this.top = -1;
    this.maxSize = maxSize;
  }

  push(data) {
    if (this.top >= this.maxSize - 1) {
      throw new Error('Stack Overflow!');
    }

    this.stack[++this.top] = data; 
  }

  pop() {
    if (this.top < 0) {
      throw new Error('Stack Underflow')
    }

    return this.stack[this.top--];
  }

  peek() {
    if (this.isEmpty()) {
      throw new Error('Stack Underflow')
    }

    return this.stack[this.top];
  }

  isEmpty() {
    return this.top === -1;
  }

  isFull() {
    return this.top === this.maxSize - 1;
  }
}
