class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* newNode = new Node(x);

        // If list is empty
        if (head == NULL) {
            return newNode;
        }

        // Traverse to the last node
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Insert at end
        temp->next = newNode;

        return head;
    }
};
