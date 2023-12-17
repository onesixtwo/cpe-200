#include <iostream>
#include <limits>
using namespace std;

#define MAX_SIZE 100

class Queue {
private:
    int front, rear;
    int queue[MAX_SIZE];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue more elements." << endl;
            return;
        } else if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        queue[rear] = value;
        cout << value << " enqueued to the queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue from an empty queue." << endl;
            return;
        } else if (front == rear) {
            cout << queue[front] << " dequeued from the queue." << endl;
            front = rear = -1;
        } else {
            cout << queue[front] << " dequeued from the queue." << endl;
            front++;
        }
    }

    void search(int value) {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot search in an empty queue." << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            if (queue[i] == value) {
                cout << "Element " << value << " found at position " << i << " in the queue." << endl;
                return;
            }
        }

        cout << "Element " << value << " not found in the queue." << endl;
    }
};

int main() {
    Queue queue;
    int choice, element;

    while (true) {
        cout << "\nQueue Operations: \n\n1. Enqueue \n2. Dequeue \n3. Search \n4. Exit ";
        cout << "\n\nEnter your choice: ";

        if (!(cin >> choice)) {
            cout << "\nError: Invalid input. Please enter a valid option." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> element;
                queue.enqueue(element);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                cout << "Enter element to search: ";
                cin >> element;
                queue.search(element);
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Error: Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}
