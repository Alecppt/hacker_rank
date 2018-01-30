/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
   Node *n = new Node();
   n->data = data;
   n->next = nullptr;
   if (!head) return head = n;
   else 
   {
       Node *current = head;
       while(current->next)
       {
           current = current->next;
       }
       current->next = n;
       return head;
   }
}
