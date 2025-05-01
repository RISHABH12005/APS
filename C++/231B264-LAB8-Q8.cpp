if (head == nullptr) return false;
    SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;     
        fast = fast->next->next;   
        if (slow == fast) {
            return true;      
        }
    }
    return false; 