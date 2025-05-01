// Write a menu driven program using switch-case to insert the node at beginning, from specified position and at the end of linked list.
#include <iostream>
using namespace std;
struct Nod {
    int data;
    Nod* next;
    Nod(int v) : data(v), next(nullptr) {}
};
class SLL{
private:
    Nod* head;
public:
    SLL() : head(nullptr) {}
    void start(int v) {
        Nod* newNod = new Nod(v);
        newNod->next = head;
        head = newNod;}
    void ends(int v) {
        Nod* newNod = new Nod(v);
        if (head == nullptr) {
            head = newNod;
            return;}
        Nod* now = head;
        while (now->next != nullptr) {
            now = now->next;}
        now->next = newNod;
    }
    void loc(int v, int Loc) {
        if (Loc < 1) {
            cout << "!! Invalid Location !!" << endl;
            return;}
        if (Loc == 1) {
            start(v);
            return;}
        Nod* newNod = new Nod(v);
        Nod* now = head;
        for (int i = 1; i < Loc - 1 && now != nullptr; ++i) {
            now = now->next;}
        if (now == nullptr) {
            cout << "Location exceeds list length. Inserting end." << endl;
            ends(v);
        } else {
            newNod->next = now->next;
            now->next = newNod;}
    }
    void Display() {
        Nod* now = head;
        if (now == nullptr) {
            cout << "List is 0." << endl;
            return;}
        cout << "Linked List: ";
        while (now!= nullptr) {
            cout << now->data << " -> ";
            now = now->next;}
        cout << "0 ptr" << endl;}
};
int main() {
    SLL list;
    int select, vlu, Loc;
    do {
        cout << "\nMenu:\n";
        cout << "1. Insert Start\n";
        cout << "2. Insert Location\n";
        cout << "3. Insert End\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Enter Select: ";
        cin >> select;
        switch (select) {
            case 1:
                cout << "Enter Value: ";
                cin >> vlu;
                list.start(vlu);
                break;
            case 2:
                cout << "Enter Value: ";
                cin >> vlu;
                cout << "Enter Location: ";
                cin >> Loc;
                list.loc(vlu, Loc);
                break;
            case 3:
                cout << "Enter Value: ";
                cin >> vlu;
                list.ends(vlu);
                break;
            case 4:
                list.Display();
                break;
            case 5:
                cout << "Exit Code." << endl;
                break;
            default:
                cout << "!! Invalid !! Try again !!" << endl;
                break;}
    } while (select != 5);
    return 0;
}
