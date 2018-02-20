/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    if (head == nullptr ) return head;
    /* O(N^2) if brute force the question */
    
    Node* current = head;
    Node* target = head->next;
    while (current)
    {
        while(target)
        {
            if(current->data == target->data)
            {
                current->next = target->next;
            }
            target = target->next;
        }
        target = head->next;
        current = current->next;
    }
    return head;

}
