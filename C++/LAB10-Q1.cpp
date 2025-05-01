#include <iostream>
using namespace std;

#define MAX 100

class LinearQueue {
    int arr[MAX];
    int front, rear;

public:
    LinearQueue() {
        front = -1;
        rear = -1;
    }

    void insert(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << "Inserted " << x << " into the queue." << endl;
    }

    void deleteElement() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << "Deleted element is " << arr[front++] << endl;
        if (front > rear) front = rear = -1; // Reset queue when empty
    }

    void displayFront() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Element at the front is " << arr[front] << endl;
    }

    void displayAll() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue is:" << endl;
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    LinearQueue q;
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
