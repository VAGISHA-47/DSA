

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
    
        if(head == NULL || head->next == NULL || k == 0)
            return head;

        
        int len = 1;
        ListNode* temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
            len++;
        }
        temp->next = head;
        k = k % len;

        int steps = len - k;

        ListNode* newTail = temp;

        while(steps--) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;

        newTail->next = NULL;

        return newHead;
    }
};