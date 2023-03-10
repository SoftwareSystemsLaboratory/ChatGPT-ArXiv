Node* List_reverse(Node* head) {
  if (head == NULL) { 
    return NULL; 
  }
  Node* orighead = head;
  Node* revhead = NULL; 
  Node* origsec; 
  while (orighead != NULL) {
    origsec = orighead->next;
    orighead->next = revhead;
    revhead = orighead;
    orighead = origsec;
  }
  return revhead;
}
