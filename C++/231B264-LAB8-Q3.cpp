// WAP to insert at the beginning of the linked list. https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linkedlist/problem
 SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data); 
    newNode->next = llist;
    return newNode; 