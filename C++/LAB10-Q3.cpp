#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinearQueue {
    Node* front;
    Node* rear;

public:
    LinearQueue() {
        front = nullptr;
        rear = nullptr;
    }

    void insert(int x) {
        Node* temp = new Node(x);
        if (rear == nullptr) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        cout << "Inserted " << x << " into the queue." << endl;
    }

    void deleteElement() {
        if (front == nullptr) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << "Deleted element is " << front->data << endl;
        Node* temp = front;
        front = front->next;
        if (front == nullptr) rear = nullptr; // Reset rear when queue is empty
        delete temp;
    }

    void displayFront() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Element at the front is " << front->data << endl;
    }

    void displayAll() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue is:" << endl;
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
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
