class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;
        dfs(head);
        return head;
    }

    Node* dfs(Node* head) {
        Node* curr = head;
        Node* last = NULL;

        while (curr) {
            Node* nextNode = curr->next;
            if (curr->child) {
                Node* childHead = curr->child;
                Node* childTail = dfs(childHead);
                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;
                if (nextNode) {
                    childTail->next = nextNode;
                    nextNode->prev = childTail;
                }

                last = childTail;
            } else {
                last = curr;
            }

            curr = nextNode;
        }

        return last;
    }
};