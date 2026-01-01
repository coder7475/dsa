// Node
function createNode(value) {
  return {
    value,
    next: null,
  };
}

// Linked List
let MyLinkedList = function () {
  this.head = null;
  this.length = 0;
};

// Add Methods to the Linked List
MyLinkedList.prototype.checkIndex = function (index) {
  return index < 0 || index > this.length;
};

/**
 * @param {number} index
 * @return {number}
 */
MyLinkedList.prototype.get = function (index) {
  if (this.checkIndex(index) || index === this.length) return -1;

  let current = this.head;
  let i = 0;

  while (i < index) {
    i++;
    current = current.next;
  }

  return current.value;
};

/**
 * @param {number} val
 * @return {void}
 */
MyLinkedList.prototype.addAtHead = function (val) {
  const newNode = createNode(val);

  // wiring the new node
  newNode.next = this.head;
  this.head = newNode;

  // increase length
  this.length++;
};

/**
 * @param {number} val
 * @return {void}
 */
MyLinkedList.prototype.addAtTail = function (val) {
  const newNode = createNode(val);

  if (!this.head) {
    this.head = newNode;
    this.length++;

    return;
  }

  // find the last node
  let current = this.head;

  while (current.next) {
    current = current.next;
  }

  // add new node to last node
  current.next = newNode;

  // increase length
  this.length++;
};

/**
 * @param {number} index
 * @param {number} val
 * @return {void}
 */
MyLinkedList.prototype.addAtIndex = function (index, val) {
  if (this.checkIndex(index)) return;

  if (index === 0) {
    this.addAtHead(val);
    return;
  }

  if (index === this.length) {
    this.addAtTail(val);
    return;
  }

  const newNode = createNode(val);

  // find the nodes between where to insert
  let current = this.head;

  let i = 0;
  while (i < index - 1) {
    current = current.next;
    i++;
  }

  // Do the wiring - insert
  newNode.next = current.next;
  current.next = newNode;

  // increase length
  this.length++;
};

/**
 * @param {number} index
 * @return {void}
 */
MyLinkedList.prototype.deleteAtIndex = function (index) {
  if (this.checkIndex(index) || this.length === index) return;

  // if index is head
  if (index === 0) {
    this.head = this.head.next;
    this.length--;
    return;
  }

  let current = this.head;

  let i = 0;
  while (i < index - 1) {
    current = current.next;
    i++;
  }

  current.next = current.next.next;

  this.length--;
};
