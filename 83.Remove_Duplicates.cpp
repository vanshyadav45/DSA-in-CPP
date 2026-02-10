class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Handle empty list or single node list
        if (!head) return nullptr;

        ListNode* curr = head;
        
        // We need curr->next to exist to compare values
        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                // Duplicate found! Skip the next node
               
                curr->next = curr->next->next;
                 // Good practice to free memory in C++
            } else {
                // No duplicate? Move to the next node
                curr = curr->next;
            }
        }
        return head;
    }
};
