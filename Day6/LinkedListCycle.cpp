/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;ListNode *curr=head;
unordered_map<ListNode*,int>mp;
        if(temp==NULL) return false;
       while(temp->next!=NULL){
           if(mp[temp]++>0){
               return true;
           }
           temp=temp->next;
       }
        return false;
    }
};
