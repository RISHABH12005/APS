if (!llist) return nullptr;
    if (position == 0) {
        SinglyLinkedListNode* temp = llist;
        llist = llist->next; 
        delete temp; 
        return llist; 
    }
    SinglyLinkedListNode* current = llist;
    for (int i = 0; i < position - 1 && current->next; i++) {
        current = current->next;
    }
    if (current->next) {
        SinglyLinkedListNode* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
    return llist;