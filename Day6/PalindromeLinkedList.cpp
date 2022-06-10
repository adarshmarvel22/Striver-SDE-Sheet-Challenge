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
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode*x=head;
        while(x!=NULL){
            st.push(x->val);
            
            x=x->next;
        }
     
        x=head;
        while(x!=NULL){
            // cout<<x->val;
            if(st.top()!=x->val)  return false;
            st.pop();
            x=x->next;
        }
        return true;
    }
};
