/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{   
    int length = 0;
    Node* current = head;
    Node* target = head;
    while (current)
    {
        if(length > positionFromTail) target = target->next;
        length += 1;
        current = current->next;
    }
    return target->data;
}
