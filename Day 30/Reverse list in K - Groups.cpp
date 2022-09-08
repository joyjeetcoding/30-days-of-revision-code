Node* kReverse(Node* head, int k) {
    
    if(head == NULL)
        return NULL;
    
    Node* forward = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    
    while(curr != NULL && count < k)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    
    if(forward != NULL)
        head -> next = kReverse(forward, k);
    
    return prev;
}
