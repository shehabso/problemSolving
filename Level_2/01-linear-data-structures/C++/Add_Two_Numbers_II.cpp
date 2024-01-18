/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* prev = NULL;

        while(head) {
            ListNode* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        int rem=0;
        ListNode * result=new ListNode(); 
        l1=reverseLinkedList(l1);
        l2=reverseLinkedList(l2); 
        while (l1 ||l2 ){
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            result->val=sum%10;
            rem=sum/10;
            ListNode * temp =new ListNode(rem);
            temp->next=result;
            result=temp; 
            sum=rem;   
        }
          return rem == 0 ? result->next : result;
    }
   
};