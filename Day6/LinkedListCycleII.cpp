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
    ListNode *detectCycle(ListNode *head) {
        ListNode*x=head;
        map<ListNode*,int>mp;
        while(x!=NULL&&(mp[x]++)<=1){
            if(mp[x]>1)  return x;
            x=x->next;
        }
        return NULL;
    }
};
