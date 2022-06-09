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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         if(list1==NULL&&list2==NULL)  return NULL;
        if(list1==NULL&&list2!=NULL)  return list2;
         if(list1!=NULL&&list2==NULL)  return list1;
        ListNode*h=list1;
        while(h->next!=NULL)   h=h->next;
        h->next=list2;
        
        ListNode*l=list1;
        ListNode*r;
        
        while(l!=NULL){
            r=l->next;
            while(r!=NULL){
                if(r->val>=l->val)  r=r->next;
                else if(r->val<l->val){
                     int x=l->val;
                    l->val=r->val;
                        r->val=x;
                    r=r->next;
                }
                // else{
                //     l=l->next;
                //     int x=l->val;
                //     l->val=r->val;
                //         r->val=x;
                //     r=r->next;
                // }
            }
            l=l->next;
        }
        return list1;
    }
};
