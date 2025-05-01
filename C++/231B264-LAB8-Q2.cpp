// WAP to print the elements of a linked list. https://www.hackerrank.com/challenges/print-the-elements-of-a-linkedlist/problem
void printLinkedList(SinglyLinkedListNode* head) {
// Write your code here
    SinglyLinkedListNode* current = head;
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
}
}
