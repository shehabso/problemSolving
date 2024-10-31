
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* p=head;
        ListNode* q=head->next;

        p->next= swapPairs(head->next->next);
        q->next=p;
        return q;
    }
};