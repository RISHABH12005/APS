SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    if (position == 0) {
        newNode->next = llist;
        return newNode;
    }
    SinglyLinkedListNode* current = llist;
    for (int i = 0; i < position - 1 && current != nullptr; i++) {
        current = current->next;
    }
    if (current != nullptr) {
        newNode->next = current->next;
        current->next = newNode;
    }
    return llist;