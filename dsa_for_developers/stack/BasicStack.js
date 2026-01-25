const MAX_SIZE = 10;

function Stack() {
  this.stack = new Array(MAX_SIZE)
  this.top = -1;
}

Stack.prototype.push = function (value) { 
  if (this.top >= MAX_SIZE - 1) {
    throw new Error("Stack Overflow");
  }

  this.stack[++this.top] = value;
}

Stack.prototype.pop = function() {
  if (this.top < 0) {
    throw new Error("Stack Underflow");
  }

  return this.stack[this.top--];
}

Stack.prototype.peek = function () {
  if (this.top < 0) {
    throw new Error("Stack Underflow");
  }

  return this.stack[this.top]
}

const stack = new Stack();

stack.push(1);
stack.push(3);
stack.push(6);

stack.pop();

console.log('Stack: ', stack);
console.log('Top: ', stack.peek()); // 3
