#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert a node at the end of the list
    void insertAtEnd(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Insert a node at the beginning of the list
    void insertAtBeginning(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }

    // Print the elements of the list
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Delete the first node of the list
    void deleteFromBeginning() {
        if (head == nullptr)
            return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Delete the last node of the list
    void deleteFromEnd() {
        if (head == nullptr || head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    // Insert a node at a specific position in the list
    void insertAtPosition(int index, int val) {
        if (index < 0)
            return;
        if (index == 0) {
            insertAtBeginning(val);
            return;
        }
        Node* newNode = new Node();
        newNode->data = val;
        Node* temp = head;
        int count = 0;
        while (temp != nullptr && count < index - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == nullptr)
            return;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete a node at a specific position in the list
    void deleteAtPosition(int index) {
        if (head == nullptr || index < 0)
            return;
        if (index == 0) {
            deleteFromBeginning();
            return;
        }
        Node* temp = head;
        int count = 0;
        while (temp != nullptr && count < index - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == nullptr || temp->next == nullptr)
            return;
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Search for a value in the list
    bool search(int val) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == val)
                return true;
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    LinkedList myList;
    myList.insertAtEnd(1);
    myList.insertAtEnd(2);
    myList.insertAtEnd(3);
    myList.insertAtBeginning(0);
    cout << "Printing list: ";
    myList.printList();
    cout << "Search for value 2: " << (myList.search(2) ? "Found" : "Not found") << endl;
    cout << "Search for value 5: " << (myList.search(5) ? "Found" : "Not found") << endl;
    return 0;
}
