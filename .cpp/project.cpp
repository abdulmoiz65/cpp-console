#include <iostream>
#include <iomanip>

using namespace std;
const int max_size = 100; 

int stack[max_size]; 
int top = -1; 

int queue[max_size]; 
int frontQ = -1; 
int rearQ = -1; 

int deque[max_size];
int frontD = -1; 
int rearD = -1; 



void push(int value) {
    if (top == max_size - 1) {
        cout << "Stack overflow!" << endl;
        return;
    }
    stack[++top] = value;
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow!" << endl;
        return;
    }
    --top;
}

int peekStack() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return stack[top];
}


void enqueue(int value) {
    if (rearQ == max_size - 1) {
        cout << "Queue overflow!" << endl;
        return;
    }
    if (frontQ == -1) {
        frontQ = 0;
    }
    queue[++rearQ] = value;
}

void dequeue() {
    if (frontQ == -1 || frontQ > rearQ) {
        cout << "Queue underflow!" << endl;
        return;
    }
    ++frontQ;
}

int peekQueue() {
    if (frontQ == -1 || frontQ > rearQ) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    return queue[frontQ];
}

// Deque operations
void enqueueFront(int value) {
    if (frontD == 0) {
        cout << "Deque overflow at the front!" << endl;
        return;
    }
    if (frontD == -1) {
        frontD = rearD = 0;
    } else {
        --frontD;
    }
    deque[frontD] = value;
}

void enqueueRear(int value) {
    if (rearD == max_size - 1) {
        cout << "Deque overflow at the rear!" << endl;
        return;
    }
    if (frontD == -1) {
        frontD = rearD = 0;
    } else {
        ++rearD;
    }
    deque[rearD] = value;
}

void dequeueFront() {
    if (frontD == -1 || frontD > rearD) {
        cout << "Deque underflow at the front!" << endl;
        return;
    }
    ++frontD;
}

void dequeueRear() {
    if (rearD == -1 || frontD > rearD) {
        cout << "Deque underflow at the rear!" << endl;
        return;
    }
    --rearD;
}

int peekDeque() {
    if (frontD == -1 || frontD > rearD) {
        cout << "Deque is empty!" << endl;
        return -1;
    }
    return deque[frontD];
}

int main() {
    int option;
    int value;
    while (true) {
    	
    	cout<<  " ________________________________________________";
    	cout<<  "\n|		      Options                    |";
        cout << "\n|------------------------------------------------|";
        cout << "\n|  1. Push                                       |";
        cout << "\n|  2. Pop                                        |";
        cout << "\n|  3. Enqueue                                    |";
        cout << "\n|  4. Dequeue                                    |";
        cout << "\n|  5. EnqueueFront                               |";
        cout << "\n|  6. EnqueueRear                                |";
        cout << "\n|  7. DequeueFront                               |";
        cout << "\n|  8. DequeueRear                                |";
        cout << "\n|  9. Show Stack, Queue and Dequeue Values       |";
        cout << "\n|  10. Exit                                      |";
        cout << "\n|________________________________________________|";
        cout<< endl;
        cout << "\n Your Option: ";
        cin >> option;

        if (option == 10) {
            break;
        }

        switch (option) {
            case 1:
                cout << "\nEnter a value: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                cout << "\nEnter a value: ";
                cin >> value;
                enqueue(value);
                break;
            case 4:
                dequeue();
                break;
            case 5:
                cout << "\nEnter a value: ";
                cin >> value;
                enqueueFront(value);
                break;
            case 6:
                cout << "\nEnter a value: ";
                cin >> value;
                enqueueRear(value);
                break;
            case 7:
                dequeueFront();
                break;
            case 8:
                dequeueRear();
                break;
            case 9:
                cout << "\nStack: ";
                if (top == -1) {
                    cout << "Stack is empty!" << endl;
                } else {
                    for (int i = 0; i <= top; i++) {
                        cout << stack[i] << " ";
                    }
                    cout << endl;
                }
                cout << "\nQueue: ";
                if (frontQ == -1 || frontQ > rearQ) {
                    cout << "Queue is empty!" << endl;
                } else {
                    for (int i = frontQ; i <= rearQ; i++) {
                        cout << queue[i] << " ";
                    }
                    cout << endl;
                }
                cout << "\nDeque: ";
                if (frontD == -1 || frontD > rearD) {
                    cout << "Deque is empty!" << endl;
                } else {
                    for (int i = frontD; i <= rearD; i++) {
                        cout << deque[i] << " ";
                    }
                    cout << endl;
                }
                break;
            default:
                cout << "\nInvalid option!" << endl;
        }
        cout << endl;
    }
    return 0;
}
