/* Write a function Insert_Beginning() to insert a new node at the beginning of singly linked list.
Call this function N time to create a linked list with N nodes.
Also write display function to print the linked list. */
#include <iostream>
using namespace std;
struct Nod {
    int data;
    Nod* next;
    Nod(int v) : data(v), next(nullptr) {}
};
class SLL {
private:
    Nod* head;
public:
    SLL() : head(nullptr) {}
    void start(int v) {
        Nod* newNod = new Nod(v);
        newNod->next = head;
        head = newNod;
    }
    void Display() {
        Nod* now = head;
        if (now == nullptr) {
            cout << "List is Mt." << endl;
            return;
        }
        cout << "Linked List: ";
        while (now != nullptr) {
            cout << now->data << " -> ";
            now = now->next;}
        cout << "0 ptr" << endl;}
};
int main() {
    SLL list;
    int N, vlu;
    cout << "Enter the No. of nods to insert: ";
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >> vlu;
        list.start(vlu);}
    list.Display();
    return 0;
}
