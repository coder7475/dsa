/**
 * JavaScript has no built-in queue with O(1) dequeue. 
 * A lightweight implementation using an object as a sparse array 
 * with head/tail pointers
 **/
class Queue {
  constructor() {
    this.items = {};
    this.head = 0;
    this.tail = 0;
  }
  enqueue(val) {
    this.items[this.tail] = val;
    this.tail++;
  }
  isEmpty() {
    return this.tail === this.head;
  }
  dequeue() {
    if (this.isEmpty()) return undefined;
    const val = this.items[this.head];
    delete this.items[this.head];
    this.head++;
    return val;
  }
  peek() {
    return this.items[this.head];
  }

  // Getter: return a computed or stored value
  get size() {
    return this.tail - this.head;
  }

}

function bfs(graph, start) {
  const visited = new Set([start]);
  const queue = new Queue();
  queue.enqueue(start);

  while (!queue.isEmpty()) {
    const node = queue.dequeue();
    for (const neighbor of (graph.get(node) ?? [])) {
      if (!visited.has(neighbor)) {
        visited.add(neighbor);
        queue.enqueue(neighbor);
      }
    }
  }
}

// ? order level transversal
// let level = 0;
// while (!queue.isEmpty()) {
//   const levelSize = queue.size;  // Capture before processing
//   for (let i = 0; i < levelSize; i++) {
//     const node = queue.dequeue();
//     // ... process node, enqueue children
//   }
//   level++;
// }
//

