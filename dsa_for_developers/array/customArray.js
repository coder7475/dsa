const DEFAULT_CAPACITY = 10;

class CustomArray {
  //private length;
  constructor(capacity = DEFAULT_CAPACITY) {
    this.capacity = capacity;
    this.length = 0;
    this.array = new Array(capacity);
  }

  // Constant Time: O(1) + Space: O(1)
  push(value) {
    this.array[this.length] = value;
    this.length++;
  }

  //  Time: O(n), Space: O(1)
  insert(index, value) {
    this.#checkIndex(index);

    // Last Item: O(1)
    if (index === this.length) {
      this.array[index] = value;
      this.length++;
      return;
    }

    // Others: O(n)
    for (let i = this.length; i > index; i--) {
      this.array[i] = this.array[i - 1];
    }

    this.array[index] = value;
    this.length++;
  }

  // Time & Space: O(n)
  copy() {
    const newArray = new Array(this.array.length);

    for (let i = 0; i < this.length; i++) {
      newArray[i] = this.array[i];
    }

    return newArray;
  }

  #checkIndex(index) {
    if (index < 0 || index > this.length) {
      throw new Error("Index is out of bounds");
    }
  }

  remove(index) {
    this.#checkIndex(index);

    const element = this.array[index];

    if (index === this.array.length - 1) {
      this.array[index] = undefined;
      this.length--;
    }

    for (let i = index; i < this.length; i++) {
      this.array[i] = this.array[i + 1];
    }

    this.length--;

    console.log("Removed the element: ", element);
  }
}

// Usage
const arr = new CustomArray();

arr.push(1, 0);
// arr.push(2, 1);
// arr.push(3, 2);
// arr.push(4, 3);
// arr.push(5, 4);
// arr.push(6, 5);
arr.insert(0, 99);
arr.insert(2, 22);
arr.insert(0, 22);
arr.remove(0);

console.log(arr.array);
console.log("Length: ", arr.length);
