Node * List_reverse(Node * head)
{
  if (head == NULL) { return NULL; } 
  Node * orighead = head;
  Node * revhead = NULL; 
  Node * origsec; 
  while (orighead != NULL)
    {
      orighead -> next = revhead;
      origsec = orighead -> next;
      revhead = orighead;
      orighead = origsec;
    }
  return revhead;
}