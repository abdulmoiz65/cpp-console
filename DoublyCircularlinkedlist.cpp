#include <iostream>
using namespace std;

// Node structure for Doubly Circular Linked List
struct Node {
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// Doubly Circular Linked List class
class DoublyCircularLinkedList {
private:
    Node* head;
    int size;

public:
    // Constructor
    DoublyCircularLinkedList() {
        head = nullptr;
        size = 0;
    }

    // Function to insert node at the end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            newNode->next = newNode;
            newNode->prev = newNode;
        } else {
            Node* last = head->prev;
            last->next = newNode;
            newNode->prev = last;
            newNode->next = head;
            head->prev = newNode;
        }
        size++;
    }

    // Function to insert node at the beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            newNode->next = newNode;
            newNode->prev = newNode;
        } else {
            Node* last = head->prev;
            head->prev = newNode;
            newNode->next = head;
            newNode->prev = last;
            last->next = newNode;
            head = newNode;
        }
        size++;
    }

    // Function to print the list
    void printList() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    // Function to delete node from the beginning
    void deleteAtBeginning() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            Node* last = head->prev;
            Node* second = head->next;
            last->next = second;
            second->prev = last;
            delete head;
            head = second;
        }
        size--;
    }

    // Function to delete node from the end
    void deleteAtEnd() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            Node* last = head->prev;
            Node* secondLast = last->prev;
            secondLast->next = head;
            head->prev = secondLast;
            delete last;
        }
        size--;
    }

    // Function to insert node at a specific index
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
            Node* temp = head;
            for (int i = 0; i < index - 1; ++i) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
            size++;
        }
    }

    // Function to delete node at a specific index
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
            Node* temp = head;
            for (int i = 0; i < index; ++i) {
                temp = temp->next;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            size--;
        }
    }

    // Destructor
    ~DoublyCircularLinkedList() {
        if (head != nullptr) {
            Node* temp = head;
            Node* nextNode;
            do {
                nextNode = temp->next;
                delete temp;
                temp = nextNode;
            } while (temp != head);
            head = nullptr;
            size = 0;
        }
    }
};

int main() {
    cout << "------------------DOUBLY CIRCULAR LINKED LIST-----------------------" << endl << endl;

    DoublyCircularLinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    cout << "Inserting 1, 2, 3 at the end:\t";
    list.printList();
    cout << endl;

    list.insertAtBeginning(0);
    cout << "Inserting 0 at the beginning:\t";
    list.printList();
    cout << endl;

    cout << "Print list:\t\t\t";
    list.printList();
    cout << endl;

    list.deleteAtBeginning();
    cout << "Deleting from the beginning:\t";
    list.printList();
    cout << endl;

    list.deleteAtEnd();
    cout << "Deleting from the end:\t\t";
    list.printList();
    cout << endl;

    list.insertAt(1, 4);
    cout << "Inserting 4 at index 1:\t\t";
    list.printList();
    cout << endl;

    list.deleteAt(1);
    cout << "Deleting element at index 1:\t";
    list.printList();
    cout << endl;

    return 0;
}
