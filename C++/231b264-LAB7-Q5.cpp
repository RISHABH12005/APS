/* Assume you have given a start pointer of a singly linked list.
Write a program to find the middle node in the given linked list. */
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
SLL* mid(SLL* head) {
    SLL* slow = head;
    SLL* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
SLL* insertNodeAtTail(SLL* head, int data) {
    SLL* newNod = new SLL(data);
    if (head == nullptr) {
        return newNod;
    }
    SLL* now = head;
    while (now->next != nullptr) {
        now = now->next;
    }
    now->next = newNod;

    return head;
}
void LL(SLL* head) {
    SLL* now = head;
    while (now != nullptr) {
        cout << now->data << " -> ";
        now = now->next;
    }
    cout << "NULL" << endl;
}
int main() {
    SLL* head = nullptr;
    head = insertNodeAtTail(head, 10);
    head = insertNodeAtTail(head, 20);
    head = insertNodeAtTail(head, 30);
    head = insertNodeAtTail(head, 40);
    head = insertNodeAtTail(head, 50);
    cout << "Linked List: ";
    LL(head);
    SLL* middle = mid(head);
    if (middle != nullptr) {
        cout << "The middle node is: " << middle->data << endl;
    } else {
        cout << "The linked list is empty." << endl;
    }
    return 0;
}
