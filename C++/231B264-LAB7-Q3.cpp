// Write a menu driven program to delete the node from the beginning, from specified position and from the end of linked list.
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
    void DelStart() {
        if (head == nullptr) {
            cout << "List is Mt." << endl;
            return;}
        Nod* temp = head;
        head = head->next;
        delete temp;
        cout << "Nod deleted from Start." << endl;
    }
    void DelEnd() {
        if (head == nullptr) {
            cout << "List is Mt." << endl;
            return;}
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            cout << "Nod deleted from End." << endl;
            return;}
        Nod* now = head;
        while (now->next->next != nullptr) {
            now = now->next;}
        delete now->next;
        now->next = nullptr;
        cout << "Nod deleted from End." << endl;
        }
    void DelLoc(int Loc) {
        if (Loc< 1) {
            cout << "!! Invalid Location !!" << endl;
            return;}
        if (Loc == 1) {
            DelStart();
            return;}
        Nod* now = head;
        for (int i = 1; i < Loc - 1 && now != nullptr; ++i) {
            now = now->next;}
        if (now == nullptr || now->next == nullptr) {
            cout << "Location exceeds list length. Nothing to delete." << endl;
            return;}
        Nod* temp = now->next;
        now->next = temp->next;
        delete temp;
        cout << "Nod deleted from Location " << Loc<< "." << endl;
    }
    void Display() {
        Nod* now = head;
        if (now == nullptr) {
            cout << "List is Mt." << endl;
            return;}
        cout << "Linked List: ";
        while (now != nullptr) {
            cout << now->data << " -> ";
            now = now->next;}
        cout << "0 ptr" << endl;}
};
int main() {
    SLL list;
    int select, vlu, Loc;
    do {
        cout << "\nMenu:\n";
        cout << "1. Insert End\n";
        cout << "2. Delete Start\n";
        cout << "3. Delete Location\n";
        cout << "4. Delete End\n";
        cout << "5. Display List\n";
        cout << "6. Exit\n";
        cout << "Enter select: ";
        cin >> select;
        switch (select) {
            case 1:
                cout << "Enter value: ";
                cin >> vlu;
                list.ends(vlu);
                break;
            case 2:
                list.DelStart();
                break;
            case 3:
                cout << "Enter position: ";
                cin >> Loc;
                list.DelLoc(Loc);
                break;
            case 4:
                list.DelEnd();
                break;
            case 5:
                list.Display();
                break;
            case 6:
                cout << "Exit Code." << endl;
                break;
            default:
                cout << "!! Invalid Select !! Try again !!" << endl;
                break;
        }
    } while (select != 6);
    return 0;
}
