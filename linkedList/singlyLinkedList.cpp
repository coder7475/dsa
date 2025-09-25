#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
  // Constructor
  Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
  Node *head;

public:
  LinkedList() : head(nullptr) {}

  void insertAtBeginning(int val) {
    Node *newNode = new Node(val);

    newNode->next = head;

    head = newNode;
  }

  void insertAtTheEnd(int val) {
    Node *newNode = new Node(val);

    if (head == nullptr) {
      head = newNode;
      return;
    }

    Node *current = head;

    while (current->next != nullptr) {
      current = current->next;
    }

    current->next = newNode;
  }

  void deleteNode(int val) {
    if (head == nullptr)
      return;                // Empty list
    if (head->data == val) { // If head is the target
      Node *temp = head;
      head = head->next;
      delete temp;
      return;
    }
    Node *current = head;
    while (current->next != nullptr && current->next->data != val) {
      current = current->next; // Traverse to find the node
    }
    if (current->next != nullptr) { // If node is found
      Node *temp = current->next;
      current->next = temp->next;
      delete temp;
    }
  }

  void display() {
    Node *current = head;
    while (current != nullptr) {
      std::cout << current->data << " -> ";
      current = current->next;
    }
    std::cout << "nullptr" << std::endl;
  }

  ~LinkedList() {
    Node *current = head;
    while (current != nullptr) {
      Node *next = current->next;
      delete current;
      current = next;
    }
    head = nullptr;
  }
};

int main() {
  LinkedList list;

  // Insert elements
  list.insertAtTheEnd(10);
  list.insertAtTheEnd(20);
  list.insertAtBeginning(5);

  // Display the list
  cout << "Linked List: ";
  list.display(); // Output: 5 -> 10 -> 20 -> nullptr

  // Delete an element
  list.deleteNode(10);

  // Display the updated list
  cout << "After deleting 10: ";
  list.display(); // Output: 5 -> 20 -> nullptr

  return 0;
}
