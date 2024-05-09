#include <iostream>
using namespace std;

// Node structure for Circular Linked List
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Circular Linked List class
class CircularLinkedList {
private:
    Node* head;
    int size;

public:
    // Constructor
    CircularLinkedList() {
        head = NULL;
        size = 0;
    }

    // Function to insert node at the end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            newNode->next = newNode;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
        size++;
    }

    // Function to insert node at the beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            newNode->next = newNode;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            newNode->next = head;
            temp->next = newNode;
            head = newNode;
        }
        size++;
    }

    // Function to print the list
    void printList() {
        if (head == NULL) {
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
        if (head == NULL) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        if (head->next == head) {
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = head->next;
            Node* delNode = head;
            head = head->next;
            delete delNode;
        }
        size--;
    }

    // Function to delete node from the end
    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        if (head->next == head) {
            delete head;
            head = NULL;
        } else {
            Node* prev = NULL;
            Node* current = head;
            while (current->next != head) {
                prev = current;
                current = current->next;
            }
            prev->next = head;
            delete current;
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
            for (int i = 0; i < index - 1; ++i) {
                temp = temp->next;
            }
            Node* delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
            size--;
        }
    }
       bool search(int val) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == val)
                return true;
            temp = temp->next;
        }
        return false;
    }

    // Destructor
    ~CircularLinkedList() {
        if (head != NULL) {
            Node* temp = head;
            Node* nextNode;
            do {
                nextNode = temp->next;
                delete temp;
                temp = nextNode;
            } while (temp != head);
            head = NULL;
            size = 0;
        }
    }
};

int main() {
    cout << "------------------CIRCULAR LINKED LIST-----------------------" << endl << endl;

    CircularLinkedList list;
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

 cout << "Search for value 8: " << (list.search(8) ? "Found" : "Not found") << endl;
    cout << "Search for value 5: " << (list.search(5) ? "Found" : "Not found") << endl;

    return 0;
}
