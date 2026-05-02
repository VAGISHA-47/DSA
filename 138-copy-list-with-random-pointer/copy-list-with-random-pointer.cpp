class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        Node* temp = head;
        while (temp) {
            Node* copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;
            temp = copy->next;
        }

        temp = head;
        while (temp) {
            if (temp->random)
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }

        temp = head;
        Node* newHead = head->next;
        Node* copy = newHead;

        while (temp) {
            temp->next = temp->next->next;
            if (copy->next)
                copy->next = copy->next->next;

            temp = temp->next;
            copy = copy->next;
        }

        return newHead;
    }
};