//  WAP to search an element in the linked list.
#include <iostream>
using namespace std;
class SLL{
public:
    int data;
    SLL* next;

    SLL(int nodData) {
        data = nodData;
        next = nullptr;
    }
};
bool search(SLL* head, int target) {
    SLL* now = head;
    while (now != nullptr) {
        if (now->data == target) {
            return true;
        }
        now = now->next;
    }
    return false;
}
SLL* insertNodeAtTail(SLL* head, int data) {
    SLL* newNode = new SLL(data);
    if (head == nullptr) {
        return newNode;
    }
    SLL* now = head;
    while (now->next != nullptr) {
        now = now->next;
    }
    now->next = newNode;
    return head;
}
int main() {
    SLL* head = nullptr;
    head = insertNodeAtTail(head, 10);
    head = insertNodeAtTail(head, 20);
    head = insertNodeAtTail(head, 30);
    head = insertNodeAtTail(head, 40);
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    if (search(head, target)) {
        cout << "Element " << target << " found in the linked list." << endl;
    } else {
        cout << "Element " << target << " not found in the linked list." << endl;
    }
    return 0;
}

