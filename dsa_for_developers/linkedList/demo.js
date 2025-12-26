class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

const node1 = new Node(10);
const node2 = new Node(20);
const node3 = new Node(30);
const node4 = new Node(40);
const node5 = new Node(50);

node1.next = node2;
node2.next = node3;
node3.next = node4;
node4.next = node5;

console.log("Singly Linked List: ");
console.log(JSON.stringify(node1));

// transverse the linked list
console.log("Transversing the linked list\n");
const head = node1;
let cur = head;

while (cur) {
  console.log(JSON.stringify(cur, null, 2));
  cur = cur.next;
}
