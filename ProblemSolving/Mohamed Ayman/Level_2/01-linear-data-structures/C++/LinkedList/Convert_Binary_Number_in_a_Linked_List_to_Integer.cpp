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
    int getDecimalValue(ListNode* head) {
        vector <int> ans ;
        int count =0;
        int result =0;
         while(head!=NULL){
             ans.push_back (head->val);
             head=(head->next) ;
             count ++;
         }
         for (int i=0;i<count ;i++){
             result +=ans[i]*pow(2,count -i-1);
         }
       //  cout <<result ;
         return result;
    }
};