/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node* p = headA;
    Node* q = headB;
    while(p!=q)
    {
       if (p->next == nullptr) p = headB;
        else p = p->next;
       if (q->next == nullptr) q = headA;
        else q = q->next;
    }
    return p->data;
   
}
