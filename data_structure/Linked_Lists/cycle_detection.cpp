/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
   if (head == nullptr) return false;
    Node* current = head;
    Node* fast_head = head;
    
    while (head != nullptr && fast_head->next->next != nullptr)
    {
        current = current->next;
        fast_head = fast_head->next->next;
         if(current == fast_head) return true;
    }
    return false;
    // Complete this function
    // Do not write the main method
}
