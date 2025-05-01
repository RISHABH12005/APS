#include <iostream>
#include <queue>
using namespace std;

class PriorityQueue {
    priority_queue<int> pq; // Max-Heap

public:
    void insert(int x) {
        pq.push(x);
        cout << "Inserted " << x << " into the priority queue." << endl;
    }

    void deleteElement() {
        if (pq.empty()) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }
        cout << "Deleted element is " << pq.top() << endl;
        pq.pop();
    }

    void displayTop() {
        if (pq.empty()) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }
        cout << "Element with the highest priority is " << pq.top() << endl;
    }

    void displayAll() {
        if (pq.empty()) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }

        priority_queue<int> temp = pq;
        cout << "Priority Queue is:" << endl;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    int choice, element;

    do {
        cout << "\n1.Insert\n2.Delete\n3.Display element with the highest priority\n4.Display all elements\n5.Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Input the element for adding in priority queue: ";
                cin >> element;
                pq.insert(element);
                break;

            case 2:
                pq.deleteElement();
                break;

            case 3:
                pq.displayTop();
               
