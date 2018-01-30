/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *n = new Node();
    n->data = data;
    n->next = nullptr;
    if(!head || position == 0)
    {
        n->next = head;
        head = n;
    }
    else
    {
        int i = 0;
        Node *current = head;
        while(i!=position-1 && current->next != nullptr)            
        {
            i++;
            current = current->next;
            
        }
        if(current->next == nullptr)
        {
            current->next = n;
        }
        else
        {
          n->next = current->next;
          current->next = n;     
        }
    }
    return head;
}
