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
    void deleteNode(ListNode* node) {
        queue<int>q;
        ListNode*h=node;
        while(h!=NULL){
            q.push(h->val);
            h=h->next;
        }
        q.pop();
        
        while(!q.empty()){
            node->val=q.front();
            q.pop();
            h=node;
            node=node->next;
        }
        h->next=NULL;
    }
};
