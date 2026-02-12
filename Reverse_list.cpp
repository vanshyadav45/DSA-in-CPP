class Solution {
  public:
    Node *reverse(Node *head) {
        if(!head or !head->next)return head;
        Node*curr=head;
        Node*prevnode=NULL;
        while(curr){
            prevnode=curr->prev;
            curr->prev=curr->next;
            curr->next=prevnode;
            curr=curr->prev;
        }
        return prevnode->prev;
        
    }
};
