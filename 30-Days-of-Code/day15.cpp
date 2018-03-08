Node* insert(Node *head,int data) {
    Node* newhead = new Node(data);
    if(head != NULL) {  //does until pointing at NULL
        Node *current = head;   //help from discussion
        while(current->next != NULL) {  //while the next pointer isn't equal to NULL
          current = current->next;  //if not empty will continue the jump
        }
        current->next = newhead;
        return head;
    } else {
        return newhead;
    }
}
