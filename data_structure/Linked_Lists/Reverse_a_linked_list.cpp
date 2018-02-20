	/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    if(head == nullptr || head->next == nullptr)
    {
        return head;
    }
    else
    {
        Node* remaining_node = Reverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return remaining_node;
        
    }
}
