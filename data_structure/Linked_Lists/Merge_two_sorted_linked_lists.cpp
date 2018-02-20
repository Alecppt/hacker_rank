/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    if (headA && headB == nullptr) return headA;
    if (headB && headA == nullptr) return headB;
    if (headA == nullptr && headB == nullptr) return nullptr;
    if (headA->data > headB->data)
    {
        Node* tmp = headB;
        headB = headB->next;
        tmp->next = headA;
        headA = tmp;
        headA->next = MergeLists(headA->next, headB);
    }
    else if (headA->data < headB->data)
    {
        headA->next = MergeLists(headA->next, headB);
    }
    return headA;
}
