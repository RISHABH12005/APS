DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    if (llist == nullptr || data <= llist->data) {
        newNode->next = llist;
        if (llist != nullptr) {
            llist->prev = newNode;
        }
        return newNode;
    }
    DoublyLinkedListNode* current = llist;
    while (current->next != nullptr && current->next->data < data) {
        current = current->next;
    }
    newNode->next = current->next;
    if (current->next != nullptr) {
        current->next->prev = newNode;
    }
    current->next = newNode;
    newNode->prev = current;
    return llist;
}