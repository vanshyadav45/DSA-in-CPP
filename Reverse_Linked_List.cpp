class Solution {
  public:
    Node* reverseList(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr != NULL){
            Node* nextNode = curr->next; // store next
            curr->next = prev;           // reverse link
            prev = curr;                 // move prev
            curr = nextNode;             // move curr
        }
        return prev; // new head
    }
};
