{
  // Node Definition for double linked list
  class Node {
    public next: Node | null;
    public prev: Node | null;
    constructor(public val: number) {
      this.val = val;
      this.next = null;
      this.prev = null;
    }
  }

  // Type alias for Node or null
  type INode = Node | null;

  // Double Linked List Implementation
  class MyLinkedList {
    public head: Node | null = null;
    public tail: Node | null = null;
    public size: number = 0;

    /**
     * Validates if the index is within valid bounds
     * @param index - The index to check
     * @returns true if index is out of bounds, false otherwise
     */
    private checkIndex(index: number): boolean {
      return index < 0 || index >= this.size;
    }

    /**
     * Retrieves the value at the specified index
     * @param index - The position of the node to retrieve
     * @returns The value at the index, or -1 if index is invalid
     */
    get(index: number): number {
      if (this.checkIndex(index)) {
        return -1;
      }

      let curr: INode = this.head;
      let i = 0;

      while (i < index && curr) {
        curr = curr.next;
        i++;
      }

      return curr?.val ?? -1;
    }

    /**
     * Inserts a node at the beginning of the list
     * @param val - The value to insert
     */
    addAtHead(val: number): void {
      const newNode = new Node(val);

      if (this.head === null) {
        this.head = newNode;
        this.tail = newNode;
      } else {
        newNode.next = this.head;
        this.head.prev = newNode;
        this.head = newNode;
      }

      this.size++;
    }

    /**
     * Inserts a node at the end of the list
     * @param val - The value to insert
     */
    addAtTail(val: number): void {
      const newNode = new Node(val);

      if (this.tail === null) {
        this.head = newNode;
        this.tail = newNode;
      } else {
        this.tail.next = newNode;
        newNode.prev = this.tail;
        this.tail = newNode;
      }

      this.size++;
    }

    /**
     * Inserts a node at the specified index
     * @param index - The position to insert at (0-based)
     * @param val - The value to insert
     */
    addAtIndex(index: number, val: number): void {
      // Allow insertion at index === size (append to end)
      if (index < 0 || index > this.size) {
        return;
      }

      // Delegate to specialized methods for head/tail
      if (index === 0) {
        this.addAtHead(val);
        return;
      }

      if (index === this.size) {
        this.addAtTail(val);
        return;
      }

      // Insert in the middle - update four pointers
      const newNode = new Node(val);
      let current = this.head;
      let i = 0;

      // Traverse to the insertion position
      while (i < index && current) {
        current = current.next;
        i++;
      }

      // Connect new node between previous and current
      if (current?.prev) {
        newNode.next = current;
        newNode.prev = current.prev;
        current.prev.next = newNode;
        current.prev = newNode;
        this.size++;
      }
    }

    /**
     * Deletes the node at the specified index
     * Handles three cases: head deletion, tail deletion, and middle deletion
     * @param index - The position of the node to delete (0-based)
     */
    deleteAtIndex(index: number): void {
      // Validate index bounds
      if (this.checkIndex(index)) {
        return;
      }

      // Case 1: Delete head node
      if (index === 0) {
        this.deleteHead();
        return;
      }

      // Case 2 & 3: Delete middle or tail node
      this.deleteMiddleOrTail(index);
    }

    /**
     * Helper: Deletes the head node
     * Updates head pointer and handles the prev pointer of new head
     */
    private deleteHead(): void {
      if (!this.head) return;

      // Move head to next node
      this.head = this.head.next;

      // Update new head's prev pointer to null
      if (this.head) {
        this.head.prev = null;
      } else {
        // List is now empty, update tail
        this.tail = null;
      }

      this.size--;
    }

    /**
     * Helper: Deletes a node at middle or tail position
     * @param index - The position of the node to delete
     */
    private deleteMiddleOrTail(index: number): void {
      let current = this.head;
      let i = 0;

      // Traverse to the node to delete
      while (i < index && current) {
        current = current.next;
        i++;
      }

      if (!current) return;

      // Update previous node's next pointer
      if (current.prev) {
        current.prev.next = current.next;
      }

      // Update next node's prev pointer (middle deletion)
      if (current.next) {
        current.next.prev = current.prev;
      } else {
        // Tail deletion: update tail pointer
        this.tail = current.prev;
      }

      this.size--;
    }
  }

  /**
   * Usage Example:
   * const list = new MyLinkedList();
   * list.addAtHead(1);
   * list.addAtTail(3);
   * list.addAtIndex(1, 2); // List: 1 <-> 2 <-> 3
   * list.deleteAtIndex(1);  // List: 1 <-> 3
   */
}
