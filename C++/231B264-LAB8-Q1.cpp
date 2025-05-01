// WAP to insert at the end of the linked list. https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linkedlist/proble
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
// Write your code here
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    if (head == nullptr) {
        return new_node;
    }
    SinglyLinkedListNode* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}
