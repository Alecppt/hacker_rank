/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  Node *tmp;
  if (head == nullptr )
  {
      return head;
  }
  if( position == 0)
  {
      tmp = head->next;
      delete head;
      head = tmp;
  }
  else
  {
    Node *current = head;
    int i = 0;
    while(i!= position -1 && current->next != nullptr)
    {
      current = current->next;
      i++;
    }
    if(current->next == nullptr)
    {
       //at the end of index, maybe the position given exceeds the total number of nodes
       // nothing to delete 
    }
    else
    {   tmp = current->next->next;
        delete current->next;
        current->next = tmp;
    }
  }
  
    return head;
}
