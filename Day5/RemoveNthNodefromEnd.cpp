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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;int count=1;
        while(temp->next!=NULL){temp=temp->next;count++;}
        int x=count-n;
        int y=count-n;
        y--;
        if(count==1&&n==1)  return NULL;     if(count==1&&n==0)  return head;
        ListNode*tp=head;ListNode*curr=head;
                while(y-->0){
            curr=curr->next;
        }
                while(x-->0){
            tp=tp->next;
        }
        if(curr==tp){head=tp->next;delete(tp);return head;}
        curr->next=tp->next;
        delete(tp);   
        return head;
    }
};
