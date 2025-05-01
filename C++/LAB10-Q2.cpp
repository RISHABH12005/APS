#include <iostream>
using namespace std;

#define MAX 100

class CircularQueue {
    int arr[MAX];
    int front, rear, size;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    void insert(int x) {
        if ((rear + 1) % MAX == front) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        arr[rear] = x;
        cout << "Inserted " << x << " into the queue." << endl;
    }

    void deleteElement() {
        if (front == -1) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << "Deleted element is " << arr[front] << endl;
        if (front == rear) front = rear = -1; // Reset queue when empty
        else front = (front + 1) % MAX;
    }

    void displayFront() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Element at the front is " << arr[front] << endl;
    }

    void displayAll() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue is:" << endl;
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % MAX;
        } while (i != (rear + 1) % MAX);
        cout << endl;
    }
};

int main() {
    CircularQueue q;
    int choice, element;

    do {
        cout << "\n1.Insert\n2.Delete\n3.Display element at the front\n4.Display all elements of the queue\n5.Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Input the element for adding in queue: ";
                cin >> element;
                q.insert(element);
                break;

            case 2:
                q.deleteElement();
                break;

            case 3:
                q.displayFront();
                break;

            case 4:
                q.displayAll();
                break;

            case 5:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
