
class Solution {
public:
    bool isPalin(string str){
        int n=str.size();
        for(int i=0;i<n/2;i++){
            if(str[i]!=str[n-i-1]){
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head){
        string str="";
        ListNode* temp=head;
        while(temp!=NULL){
            str+=temp->val;
            temp=temp->next;
        }
        return isPalin(str);
    }
};