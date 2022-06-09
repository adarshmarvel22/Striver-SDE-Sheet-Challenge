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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)  return NULL;
        stack<int>st;
        ListNode*temp=head;
        while(temp->next!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        st.push(temp->val);
        ListNode*new_h=new ListNode(st.top());
        st.pop();
        ListNode*t=new_h;
        while(!st.empty()){
            t->next=new ListNode(st.top());
            st.pop();
            t=t->next;
        }
        return new_h;
    }
};
