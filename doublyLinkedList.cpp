#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
    
    // Constructor to initialize node
    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    // Constructor to initialize empty list
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    // Insert new node at the end of the list
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    // Insert new node at the beginning of the list
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    // Print the list from head to tail
    void printList() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Print the list from tail to head
    void printBackward() {
        Node* current = tail;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

    // Delete node from the beginning of the list
    void deleteAtBeginning() {
        if (head == NULL) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        delete temp;
        size--;
    }

    // Delete node from the end of the list
    void deleteAtEnd() {
        if (tail == NULL) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        } else {
            head = NULL;
        }
        delete temp;
        size--;
    }

    // Insert new node at the specified index
    void insertAt(int index, int val) {
        if (index < 0 || index > size) {
            cout << "Invalid index." << endl;
            return;
        }
        if (index == 0) {
            insertAtBeginning(val);
        } else if (index == size) {
            insertAtEnd(val);
        } else {
            Node* newNode = new Node(val);
            Node* current = head;
            for (int i = 0; i < index - 1; ++i) {
                current = current->next;
            }
            newNode->next = current->next;
            newNode->prev = current;
            current->next->prev = newNode;
            current->next = newNode;
            size++;
        }
    }

    // Delete node at the specified index
    void deleteAt(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index." << endl;
            return;
        }
        if (index == 0) {
            deleteAtBeginning();
        } else if (index == size - 1) {
            deleteAtEnd();
        } else {
            Node* current = head;
            for (int i = 0; i < index; ++i) {
                current = current->next;
            }
            Node* temp = current;
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete temp;
            size--;
        }
    }

    // Destructor to deallocate memory
    ~DoublyLinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = tail = NULL;
    }
};

int main() {
    cout << "------------------DOUBLY LINKED LIST-----------------------" << endl << endl;
    DoublyLinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    cout << "Inserting 1, 2, 3 at the end: \t";
    list.printList();
    cout << endl;
    list.insertAtBeginning(0);
    cout << "Inserting 0 at the beginning: \t";
    list.printList();
    cout << endl;
    cout << "Backward print: \t\t";
    list.printBackward();
    cout << endl;
    cout << "Print list: \t\t\t";
    list.printList();
    cout << endl;
    list.deleteAtBeginning();
    cout << "Deleting from the beginning: \t";
    list.printList();
    cout << endl;
    list.deleteAtEnd();
    cout << "Deleting from the end: \t\t";
    list.printList();
    cout << endl;
    list.insertAt(1, 4);
    cout << "Inserting 4 at index 1: \t";
    list.printList();
    cout << endl;
    list.deleteAt(1);
    cout << "Deleting element at index 1: \t";
    list.printList();
    cout << endl;
    return 0;
}
