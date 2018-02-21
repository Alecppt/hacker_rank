/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node* tmp = new Node();
    tmp->data = data;
    tmp->next = nullptr;
    tmp->prev = nullptr;
    if (head == nullptr) 
    {
        return tmp;
    }
    else
    {
        if(head->data > data)
        {
            tmp->next = head;
            head->prev = tmp;
            return tmp;
        }
        Node* current = head;
        Node* prev_node;
        while(current!= nullptr && current->data <= data)
        {
            prev_node = current;
            current = current->next;
        }
        if(current ==nullptr)
        {
            prev_node->next = tmp;
            tmp->prev = prev_node;
            return head;
        }
        else
        {
            prev_node->next = tmp;
            tmp->prev = prev_node;
            tmp->next = current;
            current->prev = tmp;
            return head;       
        }
    }

}
